#include <iostream>
#include <iomanip>
#include <list>
#include <typeinfo>

using namespace std;

class Pessoa{
    private:
        int cod;
        double renda;
        string nome;
    public:
        void setCod(int v);
        void setRenda(double v);
        void setNome(string v);
        int getCod();
        double getRenda();
        string getNome();
        void ler();
};
void Pessoa::setCod(int v){
    cod=v;
}
void Pessoa::setRenda(double v){
    renda=v;
}
void Pessoa::setNome(string v){
    nome=v;
}
int Pessoa::getCod(){
    return cod;
}
double Pessoa::getRenda(){
    return renda;
}
string Pessoa::getNome(){
    return nome;
}
void Pessoa::ler(){
    cin >> cod;
    cin.ignore();
    getline(cin, nome);
    cin >>  renda;
}

class PF:public virtual Pessoa{
    private:
        int dependentes;
        string cpf,profissao;
    public:
        int getDependentes();
        string getCpf();
        string getProfissao();
        string getTipo();
        string getClasse(){return "F";};
        void setDependentes(int v);
        void setCpf(string v);
        void setProfissao(string v);
        void ler();
};
int PF::getDependentes(){
    return dependentes;
}
string PF::getCpf(){
    return cpf;
}
string PF::getProfissao(){
    return profissao;
}
void PF::setDependentes(int v){
    dependentes=v;
}
void PF::setCpf(string v){
    cpf=v;
}
void PF::setProfissao(string v){
    profissao=v;
}
void PF::ler(){
    Pessoa::ler();
    cin.ignore();
    getline(cin,cpf);
    getline(cin,profissao);
    cin >> dependentes;
}

class PJ:public virtual Pessoa{
    private:
        int im, ip;
        string cnpj;
    public:
        int getIM();
        int getIP();
        string getCnpj();
        string getClasse(){return "J";};
        void setIM(int v);
        void setIP(int v);
        void setCnpj(string v);
        void ler();
};
int PJ::getIM(){
    return im;
}
int PJ::getIP(){
    return ip;
}
string PJ::getCnpj(){
    return cnpj;
}
void PJ::setIM(int v){
    im=v;
}
void PJ::setIP(int v){
    ip=v;
}
void PJ::setCnpj(string v){
    cnpj=v;
}
void PJ::ler(){
    Pessoa::ler();
    cin.ignore();
    getline(cin,cnpj);
    cin >> im >> ip;                     
}

class Cliente:PF,PJ{
    public:
        void inserir(PF f);
        void inserir(PJ j);
        int getCod(){return Pessoa::getCod();};
        string getNome(){return Pessoa::getNome();};
        string getCpf(){return PF::getCpf();};
        string getCnpj(){return PJ::getCnpj();};
        int getIM(){return PJ::getIM();};
        int getIP(){return PJ::getIP();};
        double getIR();
        double getRenda(){return Pessoa::getRenda();};
        string getProfissao(){return PF::getProfissao();};
        int getDependentes(){return PF::getDependentes();};
};
void Cliente::inserir(PF f){
    string zero="0";
    setNome(f.getNome());
    setCod(f.getCod());
    setRenda(f.getRenda());
    setDependentes(f.getDependentes());
    setCpf(f.getCpf());
    setProfissao(f.getProfissao());
    setCnpj(zero);
}
void Cliente::inserir(PJ j){
    string zero="0";
    setNome(j.getNome());
    setCod(j.getCod());
    setRenda(j.getRenda());
    setIM(j.getIM());
    setIP(j.getIP());
    setCnpj(j.getCnpj());
    setCpf(zero);
}
double Cliente::getIR(){
    if(getCpf() == "0")
        if(getRenda()>200000)
            return (getRenda()*0.25);
        else
            return (getRenda()*0.15);
    else
        return (getRenda()*0.07);
}

class Lista{
    private:
        Cliente c[100];
        PF f;
        PJ j;
        int qtd;
    public:
        Lista(){
            qtd=0;
        }
        void inserirPF();
        void inserirPJ();
        void remover();
        void listar();
        void consultar();
        void ir();
        int FindCod(int aux);
};
void Lista::inserirPF(){
    f.ler();
    c[qtd].inserir(f);
    qtd++;
}
void Lista::inserirPJ(){
    j.ler();
    c[qtd].inserir(j);
    qtd++;
}
void Lista::remover(){
    int aux,pos,i;
    cin >> aux;
    pos=FindCod(aux);
    if(pos>-1){
        for(i=pos;i<qtd;i++)
            c[i]=c[i+1];
        qtd--;
    }
}
int Lista::FindCod(int aux){
    int i;
    for(i=0;i<qtd;i++)
        if(c[i].getCod()==aux)
            return i;
    return -1;
}
void Lista::listar(){
    string tipo;
    int i;
    cout << "Codigo Nome                           F/J             CPF/CNPJ           IR" << endl;
    for(i=0;i<qtd;i++){
        if(c[i].getCpf() == "0")
            tipo = "J";
        else
            tipo = "F";
        cout << right << setfill ('0') << setw (5) << c[i].getCod() << "  ";
        cout << left << setfill (' ') << setw (30) << c[i].getNome() << "  ";
        cout << tipo << "  ";
        if(tipo == "F")
            cout << right << setfill (' ') << setw (20) << c[i].getCpf() << " R$";
        else
            cout << right << setfill (' ') << setw (20) << c[i].getCnpj() << " R$";
        cout << right << setfill (' ') << setw (10) << setprecision(2) << fixed << c[i].getIR() << endl;
    }
}
void Lista::consultar(){
    int aux,pos,i;
    cin >> aux;
    pos=FindCod(aux);
    if(c[pos].getCpf() == "0"){
        cout << "Codigo      : " << c[pos].getCod() << endl;
        cout << "Nome        : " << c[pos].getNome() << endl;
        cout << "Renda Anual : " << c[pos].getRenda() << endl;
        cout << "CNPJ        : " << c[pos].getCnpj() << endl;
        cout << "Inscr. Mun. : " << c[pos].getIM() << endl;
        cout << "Inscr. Est. : " << c[pos].getIP() << endl; 
    }
    else{
        cout << "Codigo      : " << c[pos].getCod() << endl;
        cout << "Nome        : " << c[pos].getNome() << endl;
        cout << "Renda Anual : " << c[pos].getRenda() << endl;
        cout << "CPF         : " << c[pos].getCpf() << endl;
        cout << "Profissao   : " << c[pos].getProfissao() << endl;
        cout << "Dependentes : " << c[pos].getDependentes() << endl;
    }

}
void Lista::ir(){
    int aux,pos,i;
    cin >> aux;
    pos=FindCod(aux);
    if(pos>-1)
        cout << "R$" << right << setfill (' ') << setw (10) << setprecision(2) << fixed << c[pos].getIR() << endl;
}

int main(){
    Lista l;
    int escolha;
    do{
        do{
            cout << "1 - inserir pessoa fisica\n2 - inserir pessoa juridica\n3 - remover\n4 - consultar\n5 - ir\n6 - listar\n7 - sair\nEntre com a sua escolha:" << endl;
            cin >> escolha;
        }while(escolha < 1 || escolha > 7);
        if(escolha==1)
            l.inserirPF();
        else if(escolha==2)
            l.inserirPJ();
        else if(escolha==3)
            l.remover();
        else if(escolha==4)
            l.consultar();
        else if(escolha==5)
            l.ir();
        else if(escolha==6)
            l.listar();
        else if(escolha==7)
            cout << "Programa encerrado!" << endl;  
    }while(escolha!=7);
    return 0;
}
