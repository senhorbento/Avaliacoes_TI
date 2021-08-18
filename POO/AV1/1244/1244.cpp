#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class TPolinomio{
    private:
        double cod[100][2],qtd;
    public:
        void ler();
        float calular(float x);
};

void TPolinomio::ler(){
    int i;
    cin >> qtd;
    for(i=0;i<qtd;i++)
        cin >> cod[i][0] >> cod[i][1];
}

float TPolinomio::calular(float x){
    int i;
    double total=0;
    for(i=0;i<qtd;i++)
        total += cod[i][0]*(pow(x,cod[i][1]));
    return total;
}

int main()
{
    TPolinomio p;
    float x;
    p.ler();
    cin >> x;
    cout << setprecision(2) << fixed;
    cout << "p(" << x << ") = " << p.calular(x) << endl;
    return 0;
}
