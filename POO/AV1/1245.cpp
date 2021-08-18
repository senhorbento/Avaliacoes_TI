#include <iostream>
#include <iomanip>

using namespace std;

class TAluno{
    private:
        double nota1,nota2,media;
        string nome;
    public:
        void lerAluno();
        string getNome();
        double getMedia();
};

void TAluno::lerAluno(){
    cin.ignore();
    getline (cin,nome);
    cin >> nota1;
    cin >> nota2;
    media = (nota1 + 2.0*nota2)/3.0;
}

string TAluno::getNome(){
    return nome;
}

double TAluno::getMedia(){
    return media;
}


class TTurma{
    private:
        int qtd;
        TAluno a[100];
    public:
        void ler();
        void listar();
};


void TTurma::ler(){
    int i;
    cin >> qtd;
    for(i=0;i<qtd;i++){
        a[i].lerAluno();
    }
}

void TTurma::listar(){
    int i;
    for(i=0;i<qtd;i++){
        cout << left << setfill (' ') <<  setw (49) << a[i].getNome() << " ";
        cout << setprecision(2) << fixed << right <<setfill (' ') <<  setw (6) << a[i].getMedia() << " ";
        if(a[i].getMedia()>=6)
            cout << "Aprovado" << endl;
        else
            cout << "Reprovado" << endl;
    }
}

int main(){
    TTurma t;
    t.ler();
    t.listar();
    return 0;
}
