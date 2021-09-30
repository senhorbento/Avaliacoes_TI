package Classes;

public class Clientes {
    private String nome;
    private String CNPJ;
    private String CPF;
    private String TelefoneResidencial;
    private String TelefoneTrabalho;
    private String TelefoneCelular;
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
    
    public void setCPF(String v){
        CPF = v;
    }
    public String getCPF(){
        return CPF;
    }
    
    public void setTelefoneResidencial(String v){
        TelefoneResidencial = v;
    }
    public String getTelefoneResidencial(){
        return TelefoneResidencial;
    }
    
    public void setTelefoneTrabalho(String v){
        TelefoneTrabalho = v;
    }
    public String getTelefoneTrabalho(){
        return TelefoneTrabalho;
    }
    
    public void setTelefoneCelular(String v){
        TelefoneCelular = v;
    }
    public String getTelefoneCelular(){
        return TelefoneCelular;
    }
    
    public void setFax(String v){
        fax = v;
    }
    public String getFax(){
        return fax;
    }
}
