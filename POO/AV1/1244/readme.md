# Polinômio

Faça um programa para ler um polinômio de no máximo 100 termos, ler o valor de x e mostrar o valor do polinômio para o valor de x lido
~~~
polinômio = c1*x^e1 + c2*x^e2 + .... cn*x^en
~~~
Onde ci - coeficiente do i-eximo termo do polinômio
     ei - expoente do i-eximo termo do polinômio
     
A main deve ser, em C#:
~~~C#
    public static void Main(string []args)
    {
        TPolinomio p = new TPolinomio();
        double x;
	p.ler();
	x = double.Parse(Console.ReadLine());
        Console.WriteLine("p({0:F2}) = {1:F2}",x, p.calcular(x));
    }
~~~
Em C++:
~~~C++
    int main()
    {
        TPolinomio p;
        float x;
        p.ler();
        cin >> x;
        cout << fixed << setprecision(2);
        cout << "p(" << x << ") = " << p.calcular(x) << endl;
        return 0;
    }
~~~

## Entrada
Na primeira linha temos N inteiro (1 < N < 100), seguido de n linhas com um numero real C e um inteiro E, que representam o Coeficiente e Expoente do termo lido. e por final teremos um unico numero real, que é o Valor de X
para o qual deve calcular o valor do polinômio
~~~
ex: polinômio: 1.5X^2 -3.1X^1 + 4.0X^0 + 2.1X^10
        1.5*0 -3.1*0 + 4.0*1 + 2.1*0 = 4.00
~~~
~~~
4
1.5 2
-3.1 1
4.0 0
2.1 10        
0.0
~~~
## Saída

A saída deve ter uma única linha com "p(" seguido do valor de x, seguido de ") = " seguido do valor calculado do polinômio para o x lido. ]
Tanto o valor de x quando o valor calculado, devem ter 2 casas decimais de precisão.
~~~
p(2.30) = 556.80
~~~
