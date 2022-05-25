# Transposta da Matriz POO
Faça um programa que leia uma matriz de caractere e mostre a transposta da matriz.

~~~C#
    public static void Main(string []args)
    {
        TMatriz a = new TMatriz();
	a.ler();
	a.transposta();
        a.mostrar();
    }
~~~
Em C++:
~~~C++
    int main()
    {
        TMatriz a;
	a.ler();
	a.transposta();
        a.mostrar();
        return 0;
    }
~~~

## Entrada
Na primeria linha teremos dois inteiros N e M (0 < N,M <= 100) contendo a quantidade de linhas e colunas da matriz, respectivamente.

Na sequencia teremos N Linhas, onde para cada linha teremos M caracteres.

~~~
3 4
ABCD
xyzw
1234
~~~

## Saída

Mostrar a transposta da matriz lida  

~~~
Ax1
By2
Cz3
Dw4
~~~