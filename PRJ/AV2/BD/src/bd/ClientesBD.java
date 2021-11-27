package bd;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import javax.swing.JOptionPane;

import Classes.Cliente;

public class ClientesBD {
    private Connection conexao;
    
    public ClientesBD(){
        conexao = new banco().conectarAoBanco();  
    }
    
    private void editarBanco(String sql, Cliente obj, int func){
        try{
            PreparedStatement stmt = conexao.prepareStatement(sql);
            stmt.setString(1, obj.getCodigo());
            stmt.setString(2, obj.getNome());
            stmt.setString(3, obj.getTelefone());
            stmt.setString(4, obj.getEmail());
            stmt.setString(5, obj.getRua());
            stmt.setString(6, obj.getCasa());
            stmt.setString(7, obj.getComplemento());
            if(func == 2)
                   stmt.setString(8, obj.getCodigo());
            stmt.execute();
            stmt.close();      
        }catch(SQLException e){
            JOptionPane.showMessageDialog(null, e);
        }
    }
    
    public void adicionarCliente(Cliente c){
        String insert = "insert into pdv.clientes(codigo, nome, telefone, email, rua, casa, complemento) values(?,?,?,?,?,?,?)";
        editarBanco(insert, c, 1);
        JOptionPane.showMessageDialog(null, "Cliente adicionado!");
    }
    
    public void alterarCliente(Cliente c){
        String update = "update pdv.clientes set codigo = ?, nome = ?, telefone = ?, email = ?, rua = ?, casa = ?, complemento = ? where codigo = ?";
        editarBanco(update, c, 2);
        JOptionPane.showMessageDialog(null, "Cliente alterado!");
    }
    
    public void excluirCliente(String codigo){
        try {
            String delete = "delete from pdv.clientes where codigo = ?";
            PreparedStatement stmt = conexao.prepareStatement(delete);
            stmt.setString(1, codigo);
            stmt.execute();
            stmt.close();
            JOptionPane.showMessageDialog(null, "Cliente excluido!");
        }catch(SQLException e){
            JOptionPane.showMessageDialog(null, e);   
        } 
    }
            
    public ArrayList<Cliente>lerBancoClientes(){
        try {
            ArrayList<Cliente> lista = new ArrayList<>();
            String select = "select * from pdv.clientes";
            PreparedStatement stmt = conexao.prepareStatement(select);
            ResultSet rs = stmt.executeQuery();
            while(rs.next()){
                Cliente obj = new Cliente();
                obj.setCodigo(rs.getString("codigo"));
                obj.setNome(rs.getString("nome"));
                obj.setTelefone(rs.getString("telefone"));
                obj.setEmail(rs.getString("email"));
                obj.setRua(rs.getString("rua"));
                obj.setCasa(rs.getString("casa"));
                obj.setComplemento(rs.getString("complemento"));  
                lista.add(obj);
            }
            return lista;
        } catch (SQLException e) {
            JOptionPane.showMessageDialog(null, e);
        }
        return null;
    }

    public String buscaNome(String codigo){
        try {
            String nome = null;
            String select = "select nome FROM pdv.clientes WHERE codigo = ?";
            PreparedStatement stmt = conexao.prepareStatement(select);
            stmt.setString(1, codigo);
            ResultSet rs = stmt.executeQuery();
            while (rs.next()) {
                nome = rs.getString("nome");
            }
            return nome;
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
        return null;
    }     
}



