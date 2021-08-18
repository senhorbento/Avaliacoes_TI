#include <iostream>
#include <iomanip>
#include <list>

using namespace std;
 
class contato{
    private:
        string nome,email,telefone;
    public:
        void setEmail(string v);
        void setTelefone(string v);
        void setNome(string v);
        string getEmail();
        string getTelefone();
        string getNome();
        void ler(string nome, string email, string telefone);
};

void contato::ler(string nome, string email, string telefone){
    setEmail(email);
    setTelefone(telefone);
    setNome(nome);
}
void contato::setEmail(string v){
    email=v;
}
void contato::setTelefone(string v){
    telefone=v;
}
void contato::setNome(string v){
    nome=v;
}
string contato::getEmail(){
    return email;
}
string contato::getTelefone(){
    return telefone;
}
string contato::getNome(){
    return nome;
}

class Agenda{
    private:
        list <contato> c;
    public:
        void inserir(contato c);
        void remover();
        void listar();
        contato findEmail(string check);
};

void Agenda::inserir(contato aux){    
    c.push_back(aux);
}
void Agenda::remover(){
    int pos,i;
    string check;
    cin.ignore();
    getline(cin,check);
    c.remove_if([check](const contato&a){return ((contato)a).getEmail()==check;});
}
void Agenda::listar(){
    cout << "Nome                          Email                                     Telefone" << endl;
    for(auto a : c){
        cout << left << setfill (' ') << setw (30) << a.getNome();
        cout << left << setfill (' ') << setw (30) << a.getEmail();
        cout << right << setfill (' ') << setw (20) << a.getTelefone() << endl;
    }
}

int main() {
    Agenda c;
    contato aux;
    int escolha;
    string nome,email,telefone;
    do{
        do{
            cout << "1 - inserir\n2 - remover\n3 - listar\n4 - sair\nEntre com a sua escolha:" << endl;
            cin >> escolha;
        }while(escolha < 1 || escolha >4);
        if(escolha==1){
            cin.ignore();
            getline(cin, nome);
            getline(cin, email);
            getline(cin, telefone);
            aux.ler(nome,email,telefone);
            c.inserir(aux);
        }
        else if(escolha==2)
            c.remover();
        else if(escolha==3)
            c.listar();
        else if(escolha==4)
            cout << "Programa encerrado!" << endl;  
    }while(escolha!=4);
    return 0;
}
