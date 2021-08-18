#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class TPoligono{
    private:
        double cod[100][2];
        int qtd;
    public:
        void ler();
        double perimetro();
};

void TPoligono::ler(){
    int i;
    cin >> qtd;
    for(i=0;i<qtd;i++)
        cin >> cod[i][0] >> cod[i][1];
    cod[qtd][0]=cod[0][0];
    cod[qtd][1]=cod[0][1];
}

double TPoligono::perimetro(){
    double aux;
    int i;
    aux=0;

    for(i=0;i<qtd;i++){
        aux+=sqrt(pow((cod[i][0]-cod[i+1][0]),2) + pow((cod[i][1]-cod[i+1][1]),2)); 
    }
    return aux;
}


int main(){
    TPoligono p;
    p.ler();
    cout << fixed << setprecision(2);
    cout << "perimetro - " << p.perimetro() << endl;
    return 0;
}
