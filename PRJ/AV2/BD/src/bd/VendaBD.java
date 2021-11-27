package bd;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import javax.swing.JOptionPane;

import Classes.Venda;

public class VendaBD {
    private Connection conexao;
    
    public VendaBD(){
        conexao = new banco().conectarAoBanco();  
    }
    
    private void editarBanco(String sql, Venda obj, int func){
        try{
            PreparedStatement stmt = conexao.prepareStatement(sql);
            stmt.setString(1, obj.getCodigo());
            stmt.setString(2, obj.getData());
            stmt.setString(3, obj.getCliente());
            stmt.setString(4, obj.getCodProduto());
            stmt.setString(5, obj.getQtdProduto());
            stmt.setString(6, obj.getTotalProduto());
            stmt.setString(7, obj.getTotal());
            stmt.setString(8, obj.getPagamento());
            stmt.execute();
            stmt.close();      
        }catch(SQLException e){
            JOptionPane.showMessageDialog(null, e);
        }
    }
    
    public void adicionarVenda(Venda v){
        String insert = "insert into pdv.venda(codigo, data, cliente, cod_produto, qtd_produto, total_produto, total, pagamento) values(?,?,?,?,?,?,?,?)";
        editarBanco(insert, v, 1);
    }
                
    public ArrayList<Venda>lerBancoVenda(){
        try {
            ArrayList<Venda> lista = new ArrayList<>();
            String select = "select * from pdv.venda";
            PreparedStatement stmt = conexao.prepareStatement(select);
            ResultSet rs = stmt.executeQuery();
            while(rs.next()){
                Venda obj = new Venda();
                obj.setCodigo(rs.getString("codigo"));
                obj.setData(rs.getString("data"));
                obj.setCliente(rs.getString("cliente"));
                obj.setCodProduto(rs.getString("cod_produto"));
                obj.setQtdProduto(rs.getString("qtd_produto"));
                obj.setTotalProduto(rs.getString("total_produto"));
                obj.setTotal(rs.getString("total"));
                obj.setPagamento(rs.getString("pagamento"));
                lista.add(obj);
            }
            return lista;
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, e);
        }
        return null;
    }
    public ArrayList<Venda> lerBancoVendaDistintos(){
        try {
            ArrayList<Venda> lista = new ArrayList<>();
            String select = "select distinct codigo, cliente, total from pdv.venda";
            PreparedStatement stmt = conexao.prepareStatement(select);
            ResultSet rs = stmt.executeQuery();
            while(rs.next()){
                Venda obj = new Venda();
                obj.setCodigo(rs.getString("codigo"));
                obj.setCliente(rs.getString("cliente"));
                obj.setTotal(rs.getString("total"));
                lista.add(obj);
            }
            return lista;
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, e);
        }
        return null;
    }
    public ArrayList<Venda> buscarVenda(String codigo){
        try {
            ArrayList<Venda> lista = new ArrayList<>();
            String select = "select * from pdv.venda where codigo=" + codigo;
            PreparedStatement stmt = conexao.prepareStatement(select);
            ResultSet rs = stmt.executeQuery();
            while(rs.next()){
                Venda obj = new Venda();
                obj.setCodigo(rs.getString("codigo"));
                obj.setData(rs.getString("data"));
                obj.setCliente(rs.getString("cliente"));
                obj.setCodProduto(rs.getString("cod_produto"));
                obj.setQtdProduto(rs.getString("qtd_produto"));
                obj.setTotalProduto(rs.getString("total_produto"));
                obj.setTotal(rs.getString("total"));
                obj.setPagamento(rs.getString("pagamento"));
                lista.add(obj);
            }
            return lista;
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, e);
        }
        return null;
    }
}
