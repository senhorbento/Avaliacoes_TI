package Classes;

public class Produto {
    private String codigo, nome, unidade, data;
    private int quantidade;
    private float preco;
    
    //sets
    public void setCodigo(String v){
        codigo = v;
    }
    public void setNome(String v){
        nome = v;
    }
    public void setUnidade(String v){
        unidade = v;
    }
    public void setPreco(float v){
        preco = v;
    }
    public void setQuantidade(int v){
        quantidade = v;
    }
    public void setData(String v){
        data = v;
    }
    
    //gets
    public String getCodigo(){
        return codigo;
    }
    public String getNome(){
        return nome;
    }
    public String getUnidade(){
        return unidade;
    }
    public float getPreco(){
        return preco;
    }
    public int getQuantidade(){
        return quantidade;
    }
    public String getData(){
        return data;
    }
}
