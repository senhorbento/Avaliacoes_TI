#include <iostream>

using namespace std;

#define _Max_ 100

class TMatriz{
    private:
        char matriz[_Max_][_Max_];
        int l,c;
    public:
        void ler();
        void transposta();
        void mostrar();
};

void TMatriz::ler(){
    int i,j;
    cin >> l >> c;
    for(i=0;i<l;i++)
        for(j=0;j<c;j++)
            cin >> matriz[i][j];
}

void TMatriz::transposta(){
    int i,j;
    char nova[_Max_][_Max_];
    for(i=0;i<l;i++)
        for(j=0;j<c;j++)
            nova[i][j]=matriz[i][j];
            
    for(i=0;i<c;i++)
        for(j=0;j<l;j++)
            matriz[i][j]=nova[j][i];
            
}
void TMatriz::mostrar(){
    int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            cout << matriz[i][j];
        }
        cout << endl;
    }
}

int main(){
    TMatriz a;
    a.ler();
    a.transposta();
    a.mostrar();
    return 0;
}
