#include <iostream>
#include <iomanip>

using namespace std;
 
class produto{
    private:
        int cod;
        double preco;
        string nome;
    public:
        void setCod(int v);
        void setPreco(double v);
        void setNome(string v);
        int getCod();
        double getPreco();
        string getNome();
};

void produto::setCod(int v){
    cod=v;
}
void produto::setPreco(double v){
    preco=v;
}
void produto::setNome(string v){
    nome=v;
}
int produto::getCod(){
    return cod;
}
double produto::getPreco(){
    return preco;
}
string produto::getNome(){
    return nome;
}

class cardapio{
    private:
        produto c[20];
        int qtd;
    public:
        cardapio(){
            qtd=0;
        };
        void inserir();
        void remover();
        void consultar();
        void alterar();
        void listar();
        int findCod(int cod);
};

void cardapio::inserir(){
    int cod;
    double preco;
    string nome;
    cin >> cod;
    cin.ignore();
    getline(cin, nome);
    cin >> preco;
    c[qtd].setCod(cod);
    c[qtd].setNome(nome);
    c[qtd].setPreco(preco);
    qtd++;
}
void cardapio::remover(){
    int pos,check,i;
    cin >> check;
    pos=findCod(check);
    if(pos>-1){
        for(i=pos;i<qtd;i++)
            c[i]=c[i+1];
        qtd--;
    }
}
void cardapio::consultar(){
    int check,pos;
    cin >> check;
    pos=findCod(check);
    if(pos>-1)
        cout << "R$" << setfill (' ') <<  setw (6) << setprecision(2) << c[pos].getPreco() << endl;
    else
        cout << "R$  0.00" << endl;
}
void cardapio::alterar(){
    int check,pos;
    double preco;
    cin >> check;
    pos=findCod(check);
    if(pos>-1){
        cin >> preco;
        c[pos].setPreco(preco);
    }
}
void cardapio::listar(){
    int i;
    cout << "Codigo Nome                             Preco" << endl;
    for(i=0;i<qtd;i++){
        cout << right << setfill ('0') <<  setw (5) << c[i].getCod() << "  ";
        cout << left << setfill (' ') <<  setw (30) << c[i].getNome() << "R$";
        cout << right << setfill (' ') <<  setw (6) << setprecision(2) << fixed << c[i].getPreco() << endl;
    }
}
int cardapio::findCod(int cod){
    int i,aux;
    aux=-1;
    for(i=0;i<qtd;i++)
        if (c[i].getCod() == cod)
            aux=i;
    return aux;
}

int main() {
    cardapio c;
    int escolha;
    do{
        do{
            cout << "1 - inserir\n2 - remover\n3 - consultar\n4 - alterar\n5 - listar\n6 - sair\nEntre com a sua escolha:" << endl;
            cin >> escolha;
        }while(escolha < 1 || escolha >6);
        if(escolha==1)
            c.inserir();
        else if(escolha==2)
            c.remover();
        else if(escolha==3)
            c.consultar();
        else if(escolha==4)
            c.alterar();
        else if(escolha==5)
            c.listar();
        else if(escolha==6)
            cout << "Programa encerrado!" << endl;
    }while(escolha!=6);
    return 0;
}
