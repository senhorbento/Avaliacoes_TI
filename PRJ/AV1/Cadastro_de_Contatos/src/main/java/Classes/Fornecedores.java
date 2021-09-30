package Classes;

public class Fornecedores {
    private String nome;
    private String CNPJ;
    private String email;
    private String telefoneFixo;
    private String fax;
    
    public void setNome(String v){
        nome = v;
    }
    public String getNome(){
        return nome;
    }
    
    public void setCNPJ(String v){
        CNPJ = v;
    }
    public String getCNPJ(){
        return CNPJ;
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
    
    public void setFax(String v){
        fax = v;
    }
    public String getFax(){
        return fax;
    }
}
