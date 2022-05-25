# Alunos e Média
Faça um programa para controlar as notas da turma de Poo, o programa deve ler o nome, nota1 e nota 2, dos alunos (no máximo 100) e depois listar todos os alunos, mostrando o nome, media e situação (aprovado ou reprovado)
~~~
    media = (nota1 + 2*nota2)/3
~~~
Se media>=6 então Aprovado senão Reprovado

OBS: Obrigatoriamente use o programa principal abaixo.
~~~C#
    public static void Main(string []args)
    {
        TTurma t = new TTurma();
	t.ler();
        t.listar();
    }  
~~~
Em C++:
~~~C++
    int main()
    {
        TTurma t;
	t.ler();
        t.listar();
        return 0;
    }
~~~
Em C:
~~~C++
    int main()
    {
        TTurma t;
	ler(&t);
        listar(t);
        return 0;
    }
~~~

## Entrada
A primeira linha temos um inteiro N (0 < N < 100), seguida de 2*N linhas, onde contendo o nome, nota1 e nota2

~~~
2
Jo A Kim
7.0 10.0
Jo utro mundo
7.0 1.0
~~~
## Saída

Listar o nome alinhado a esquerda com 50 colunas, seguido da media com 6 colunas e 2 casas decimais de precisão, seguido da situação " Aprovado" ou " Reprovado".
~~~
Jo A Kim                                            9.00 Aprovado
Jo utro mundo                                       3.00 Reprovado
~~~
