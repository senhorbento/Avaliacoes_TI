#include <iostream>

using namespace std;

class TVetInt{
    private:
        int cod[100],qtd;
    public:
        void ler();
        void inverter();
        void listar();
};

void TVetInt::ler(){
    int i;
    cin >> qtd;
    for(i=0;i<qtd;i++)
        cin >> cod[i];
}

void TVetInt::inverter(){
    int i,aux[100];
    for(i=0;i<qtd;i++)
        aux[i]=cod[i];
    for(i=0;i<qtd;i++)
        cod[i]=aux[qtd-i-1];

}

void TVetInt::listar(){
    int i;
    for(i=0;i<qtd;i++){
        cout << cod[i];
        if(i < qtd-1)
            cout << " ";
        else
            cout << endl;
    }
}

int main()
{
    TVetInt v;
    v.ler();
    v.inverter();
    v.listar();
    return 0;
}
