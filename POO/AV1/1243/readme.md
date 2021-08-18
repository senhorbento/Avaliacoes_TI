# Conjunto de Reais
Faça uma classe para representar um conjuntos de números reais de no máximo 100 elementos, nesta classe deve-se ter as seguintes operações:

a. inserir elemento
b. remover elemento
c. pertence (se um elemento pertence ou nao ao conjunto)
d. esta contido (se um conjunto esta contido no outro)
e. uniao
f. intersecao
g. subtração de conjuntos

A main deve ser, em C#:
~~~C#
    public static void Main(string []args)
    {
        TConjunto a,b,c,d,e;
        int x;
        a = new TConjunto();
        b = new TConjunto();
        c = new TConjunto();
        d = new TConjunto();
        e = new TConjunto();
	a.ler();
        b.ler();
        c.uniao(a,b);
        Console.WriteLine("a UNIAO b = ");
        c.mostrar();
        d.intersecao(a,b);
        Console.WriteLine("a INTERSECAO b = ");
        d.mostrar();
        Console.WriteLine("d esta contido em a: {0}", d.estacontido(a)?"sim":"nao");
        Console.WriteLine("a contem d: {0}",a.contem(d)?"sim"?"nao");
        Console.WriteLine("c esta contido em a: {0}", c.estacontido(a)?"sim":"nao");
        Console.WriteLine("c contem a: {0}", c.contem(a)?"sim":"nao");
        Console.WriteLine("c contem b: {0}", c.contem(b)?"sim":"nao");
        Console.WriteLine("a contem b: {0}", a.contem(b)?"sim":"nao");
        Console.WriteLine("a esta contido em b: {0}", a.estacontido(b)?"sim":"nao");
        Console.WriteLine("a - b = ");
        e.subtracao(a,b);
        e.mostrar();
	x = int.Parse(Console.ReadLine());
        while (x>0){
            Console.WriteLine("{0} pertence ao conjunto A: {1}",x, a.pertence(x)?"sim":"nao");
            x = int.Parse(Console.ReadLine());
        }
    }
~~~
Em C++:
~~~C++
    int main()
    {
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
~~~

## Entrada
Na primeira linha termos um inteiro NA (0 < NA < 100) que representa o numero de linhas dos elementos a serem inseridos no conjunto A 
(não é a quantidade de elementos, uma vez que podem ter elementos repetidos na entrada e no conjunto não pode ter).  
Na linha seguinte teremos NA numeros inteiros separados por espaco, que devem ser inseridos no conjunto A.  
Na sequencia teremos um inteiro NB (0 < NB < 100) que representa o numero de linhas dos elementos a serem inseridos no conjunto B
(não é a quantidade de elementos, uma vez que podem ter elementos repetidos na entrada e no conjunto não pode ter).
Na linha seguinte teremos NB números inteiros separados por espaço, que devem ser inseridos no conjunto B.  
Na ultima linha teremos varios valores inteiros que devem ser lidos e testados se pertencem ou nao ao conjunto A, esta linha termina com o numero 0, que não deve ser testado.

~~~
10
1 2 3 3 2 1 2 7 8 8
5
1 2 3 4 5
1 2 3 4 5 6 7 8 9 10 11 0
~~~

## Saída
Na Primeira  linha escrever "a UNIAO b = " seguido dos elementos da união de a e b, separados por espaço.  
Na Segunda linha escrever "a INTERSECAO b = " seguido dos elementos da interseção de a e b, separados por espaço.  
Na Terceira linha escrever "d esta contido em a: " seguido de sim ou nao.  
Na Quarta linha escrever "a contem em d: " seguido de sim ou nao.  
Na Quinta linha escrever "c esta contido em a: " seguido de sim ou nao.  
Na Sexta linha escrever "c contem a: " seguido de sim ou nao.  
Na Sétima linha escrever "c contem b: " seguido de sim ou nao.  
Na Oitava linha escrever "a contem b: " seguido de sim ou nao.  
Na Nona linha escrever "a esta contido em b: " seguido de sim ou nao.  
Na Decima linha escrever "a - b = " seguido dos elementos da subtração dos elementos de b  no conjunto a, separados por espaço.  
Nas n linhas seguintes teremos os resultados dos testes de pertence ou nao pertece. no formato numero seguido do texto " pertence ao conjunto A:" seguido de sim ou nao.  
~~~
a UNIAO b = 1 2 3 4 5 6 7 8 9 10
a INTERSECAO b = 5
d esta contido em a: sim
a contem d: sim
c esta contido em a: nao
c contem a: sim
c contem b: sim
a contem b: nao
a esta contido em b: nao
a - b = 1 2 3 4
1 pertence ao conjunto A: sim
5 pertence ao conjunto A: sim
10 pertence ao conjunto A: nao
11 pertence ao conjunto A: nao
~~~
