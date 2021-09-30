package Classes;

public class Pessoais {
    private String nome;
    private String email;
    private String telefoneFixo;
    private String telefoneCelular;
    
    public void setNome(String v){
        nome = v;
    }
    public String getNome(){
        return nome;
    }
    
    public void setEmail(String v){
        email = v;
    }
    public String getEmail(){
        return email;
    }
    
    public void setTelefoneFixo(String v){
        telefoneFixo = v;
    }
    public String getTelefoneFixo(){
        return telefoneFixo;
    }
    
    public void setTelefoneCelular(String v){
        telefoneCelular = v;
    }
    public String getTelefoneCelular(){
        return telefoneCelular;
    }
}
