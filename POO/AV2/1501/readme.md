# Contabilidade

Um contador, que trabalha com pessoas fisicas e juridicas, precisa de um programa para fazer a contabilidade de seus clientes, todo cliente tem codigo, nome, rendaanual e IR (imposto de renda). 
O Calculo do imposto de renda eh diferente para cada tipo de pessoa (Juridica ou Fisica). 

Pessoa Juridica além do calculo diferenciado do IR, tem CNPJ, Número de Inscrição Municipal, Número de Inscrição Estadual (inteiros).  
Se rendaanual>200000 entao ir = 0.25 * rendaanual senao ir = 0.15 * rendaanual  

A Pessoa Fisica alem do calculo diferenciado do IR, tem o CPF, profissao e numero de dependentes.  
ir = 0.07 * rendaanual  

Faça um programa para realizar as seguintes tarefas:
1. inserir uma pessoa fisica
2. inserir pessoa juridica
3. remover uma pessoa dado codigo
4. visualizar dados da pessoa dado o codigo
5. consultar ir pelo codigo
6. listar todas as pessoas (codigo, nome, tipo (F ou J), cpf/cnpj, ir)  

**Obs: uso obrigatorio de herança e somente uma colecao (vetor simples ou qq outra) contendo tanto as pessoas fisica como as pessoas juridicas**

## Entrada
A entrada de dados é uma sequencia de digitação do usuário, onde ele fica em um loop escolhe:
A opção do menu um numero inteiro (1.inserir pessoa fisica, 2 inserir pessoa juridica, 3.remover, 4. visualizar dados, 5. consultar ir, 6 listar, 7 sair)
na sequencia lê os dados necessário para completar a operação escolhida.

Segue o exemplo abaixo:
~~~
1
1
Joao da Silva
25310.16
111.111.111-11
Professor
2
2
1001
Biju-vc-terias
123456.78
123.123.123/0001-12
1234
4321
2
1002
123 Xerox 
345678.90
444.444.444/0004-44
4567
4411
1
2
Maria das Gracas
35678.12
222.222.222-22
Analista Financeira
1
4
2
5
2
3
1001
6
7
~~~

## Saída

Consiste na resposta do sistema para cada ação do usuário, sempre mostrando o menu de opções.

~~~
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
R$   2497.47
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
Codigo      : 1
Nome        : Joao da Silva
Renda Anual : 25310.16
CPF         : 111.111.111-11
Profissao   : Professor
Dependentes : 2
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
R$  86419.73
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
Codigo      : 1001
Nome        : Biju-vc-terias
Renda Anual : 123456.78
CNPJ        : 123.123.123/0001-12
Inscr. Mun. : 1234
Inscr. Est. : 4321
1 - inserir pessoa fisica
2 - inserir pessoa juridica
3 - remover
4 - consultar
5 - ir
6 - listar
7 - sair
Entre com a sua escolha:
Programa encerrado!
~~~

Segue abaixo um exemplo para listar os dados dos contatos:
~~~
Codigo Nome                           F/J             CPF/CNPJ           IR
00001  Joao da Silva                   F        111.111.111-11 R$   1771.71
01001  Biju-vc-terias                  J   123.123.123/0001-12 R$  18518.52
01002  123 Xerox                       J   444.444.444/0004-44 R$  86419.73
00002  Maria das Gracas                F        222.222.222-22 R$   2497.47
~~~
