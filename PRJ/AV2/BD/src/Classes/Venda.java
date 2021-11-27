package Classes;

public class Venda {
    private String codigo, data, cliente, cod_produto, qtd_produto, total_produto, total, pagamento;

    //sets
    public void setCodigo(String v){
        codigo = v;
    }
    public void setData(String v){
        data= v;
    }
    public void setCliente(String v){
        cliente = v;
    }
    public void setCodProduto(String v){
        cod_produto = v;
    }
    public void setQtdProduto(String v){
        qtd_produto = v;
    }
    public void setTotalProduto(String v){
        total_produto = v;
    }
    public void setTotal(String v){
        total = v;
    }
    public void setPagamento(String v){
        pagamento = v;
    }
    
    //gets
    public String getCodigo(){
        return codigo;
    }
    public String getData(){
        return data;
    }
    public String getCliente(){
        return cliente;
    }
    public String getCodProduto(){
        return cod_produto;
    }
    public String getQtdProduto(){
        return qtd_produto;
    }
    public String getTotalProduto(){
        return total_produto;
    }
    public String getTotal(){
        return total;
    }
    public String getPagamento(){
        return pagamento;
    }
}
