# Vetor de Inteiros
Faça um programa para ler n valores inteiros e mostra-los na ordem inversa da leitura.

A main deve ser, em C#:
~~~C#
C#
    public static void Main(string []args)
    {
        TVetInt v = new TVetInt();
        v.ler();
        v.inverter();
        v.listar();
    }
~~~

Em C++:
~~~C++
C++
    int main()
    {
        TVetInt v;
        v.ler();
        v.inverter();
        v.listar();
        return 0;
    }
~~~

## Entrada

Na primeira linha temos o valor de n (0 < n <= 100), na segunda linha temos n números inteiros m (-10000 < m < 10000), separados com espaço.
~~~
10
1 2 3 4 5 6 7 8 9 10
~~~
## Saída

Listar os números, na mesma linha, na ordem inversa da leitura, separados por espaço, sendo que o ultimo numero não pode ter espaço depois.

**Obs: não se esqueça de pular linha, no ultimo valor.**
~~~
10 9 8 7 6 5 4 3 2 1
~~~
