package Classes;

public class Cliente {    
    private String codigo, nome, telefone, email, rua, casa, complemento;
    
    //sets
    public void setCodigo(String v){
        codigo = v;
    }
    public void setNome(String v){
        nome= v;
    }
    public void setTelefone(String v){
        telefone = v;
    }
    public void setEmail(String v){
        email = v;
    }
    public void setRua(String v){
        rua = v;
    }
    public void setCasa(String v){
        casa = v;
    }
    public void setComplemento(String v){
        complemento = v;
    }
    
    //gets
    public String getCodigo(){
        return codigo;
    }
    public String getNome(){
        return nome;
    }
    public String getTelefone(){
        return telefone;
    }
    public String getEmail(){
        return email;
    }
    public String getRua(){
        return rua;
    }
    public String getCasa(){
        return casa;
    }
    public String getComplemento(){
        return complemento;
    }
}

