# Perímetro do Polígono

Faça um programa para ler os vértices de um polígono e mostrar o perímetro do polígono lido.

A main deve ser, em C#:
~~~C#
    public static void Main(string []args)
    {
        TPoligono p = new TPoligono();
	p.ler();
        Console.WriteLine("perimetro - {0:F2}",p.perimetro());
    }
~~~
Em C++:
~~~C++
    int main()
    {
        TPoligono p;
	p.ler();
        cout << fixed << setprecision(2);
        cout << "perimetro - " << p.perimetro() << endl;
        return 0;
    }
~~~

## Entrada
Na primeira linha teremos um inteiro n (3 <= n <= 100), contendo a quantidade de vértices.
Nas n linhas seguintes teremos cada vertices (ponto 2D: x,y reais).
Cada linha de vertices tem dois valores reais separados por espaço.
~~~
4
1.0 1.0
1.0 0.0  
0.0 0.0
0.0 1.0
~~~
## Saída

Deve-se escrever "perimetro - " seguido do valor do perímetro com 2 casas.
~~~
perimetro - 4.00
~~~
