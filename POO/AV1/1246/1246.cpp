#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(double*)a - *(double*)b );
}

class TVet{
    private:
        int qtd;
        double cod[100];
        double organizar();
    public:
        void ler();
        double maior();
        double menor();
        double mediaEx();
};

void TVet::ler(){
    int i;
    cin >> qtd;
    for(i=0;i<qtd;i++)
        cin >> cod[i];
    organizar();
}

double TVet::organizar(){
    qsort (cod, qtd, sizeof(double), compare);
}

double TVet::maior(){
    return cod[qtd-1];
}

double TVet::menor(){
    return cod[0];
}

double TVet::mediaEx(){
    int i,j;
    double soma;
    soma=j=0;
    for(i=0;i<qtd;i++)
        if(cod[i] > menor() && cod[i] < maior()){
            j++;
            soma+=cod[i];
        }
    return soma/j;    

}

int main(){
    TVet v;
    v.ler();
    cout << fixed << setprecision(2);
    cout << "Maior: "<< v.maior() << endl;
    cout << "Menor: "<< v.menor() << endl;
    cout << "Media sem extremos: "<< v.mediaEx() << endl;
    return 0;
}
