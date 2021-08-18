#include <iostream>

using namespace std;

class TConjunto{
    private:
        int cod[100];
        int qtd;
    public:
        void ler();
        void mostrar();
        void uniao(TConjunto a, TConjunto b);
        void intersecao(TConjunto a, TConjunto b);
        void subtracao (TConjunto a, TConjunto b);
        bool check(int x, int a);
        bool checkConjunto(TConjunto a, int n);
        bool estacontido(TConjunto a);
        bool contem(TConjunto a);
        bool pertence(int x);     
};

void TConjunto::ler(){
    int i,aux;
    int x;
    qtd=0;
    cin >> aux;
    for(i=0;i<aux;i++){
        cin >> x;
        if(pertence(x)==false){
            cod[qtd]=x;
            qtd++;
        }
    }
}

void TConjunto::mostrar(){
    int i;
    for(i=0;i<qtd;i++){
        cout << cod[i];
        if(i<qtd-1)
            cout << " ";            
    }
    cout << endl;
}

void TConjunto::uniao(TConjunto a, TConjunto b){
    int i;
    qtd=0;
    for(i=0;i<a.qtd;i++){
        cod[i]=a.cod[i];
        qtd++;
    }
    for(i=0;i<b.qtd;i++)
        if(checkConjunto(a,b.cod[i])==false){
            cod[qtd]=b.cod[i];
            qtd++;
        }
}

void TConjunto::intersecao(TConjunto a, TConjunto b){
    int i;
    qtd=0;
    for(i=0;i<a.qtd;i++)
        if(checkConjunto(b,a.cod[i])==true){
            cod[qtd]=a.cod[i];
            qtd++;
        } 
}

void TConjunto::subtracao(TConjunto a, TConjunto b){
    int i;
    qtd=0;
    for(i=0;i<a.qtd;i++)
        if(checkConjunto(b,a.cod[i])==false){
            cod[qtd]=a.cod[i];
            qtd++;
        }   
}

bool TConjunto::checkConjunto(TConjunto a, int n){
    int i,aux;
    aux=0;
    for(i=0;i<a.qtd;i++)
        if(a.cod[i]==n)
            aux++;
    if(aux==0) return 0;
    else return 1;
}

bool TConjunto::estacontido(TConjunto a){
    int i,aux;
    aux=0;
    for(i=0;i<qtd;i++)
        if(checkConjunto(a,cod[i])==true)
            aux++;
    if(aux==qtd) return 1;
    else return 0;
}

bool TConjunto::contem(TConjunto a){
    int i,aux;
    aux=0;
    for(i=0;i<qtd;i++)
        if(checkConjunto(a,cod[i])==true)
            aux++;
    if(aux==a.qtd) return 1;
    else return 0;
}

bool TConjunto::pertence(int x){
    int i,aux;
    aux=0;
    for(i=0;i<qtd;i++)
        if(x==cod[i])
            aux++;
    if(aux==0) return 0;
    else return 1;
}

int main(){
    TConjunto a,b,c,d,e;
    int x;
    a.ler();
    b.ler();
    c.uniao(a,b);
    cout << "a UNIAO b = ";
    c.mostrar();
    d.intersecao(a,b);
    cout << "a INTERSECAO b = ";
    d.mostrar();
    cout << "d esta contido em a: " << (d.estacontido(a)?"sim":"nao") << endl;
    cout << "a contem d: " << (a.contem(d)?"sim":"nao") << endl;
    cout << "c esta contido em a: " << (c.estacontido(a)?"sim":"nao") << endl;
    cout << "c contem a: " << (c.contem(a)?"sim":"nao") << endl;
    cout << "c contem b: " << (c.contem(b)?"sim":"nao") << endl;
    cout << "a contem b: " << (a.contem(b)?"sim":"nao") << endl;
    cout << "a esta contido em b: " << (a.estacontido(b)?"sim":"nao") << endl;
    cout << "a - b = ";
    e.subtracao(a,b);
    e.mostrar();
    cin >> x;
    while (x>0){
        cout << x << " pertence ao conjunto A: " << (a.pertence(x)?"sim":"nao") << endl;
        cin >> x;
    }
    return 0;
}
