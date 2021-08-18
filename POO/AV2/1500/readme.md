# Gerenciar Cardapio

Faça o programa para gerenciar o cardápio de uma casa de lanches, sabendo que no máximo temos 20 produtos. e que as operações para gerenciar a tabela de preço são: 

1. Inserir um produto
2. Remover um produto dado o codigo
3. Consultar um preco dado o codigo
4. Atualizar o preco dado o codigo e novo preco
5. Listar a tabela da produtos

## Entrada

A entrada de dados é uma sequencia de digitação do usuário, onde ele fica em um loop escolhe:  
A opção do menu um numero inteiro (1.inserir, 2.remover, 3. consultar preço, 4 alterar, 5. listar, 6 sair)  
Na sequencia lê os dados necessário para completar a operação escolhida.  

Exemplo:
~~~
1
101
coca-colecao
2.5
1
201
x-tudo
7.5
1
102
refresco do dia
0.5
5
4
201
4.61
5
6
~~~

## Saída

Consiste na resposta do sistema para cada ação do usuário, sempre mostrando o menu de opções.

Quando a opção for a 3, consultar, o valor do produto deve ter 6 casas de largura, duas casas decimais de precisão e ser precedido de R$. 
Ex: R$  3.00  

Abaixo pode ser visto uma saída do programa.
~~~
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
Codigo Nome                             Preco
00101  coca-colecao                  R$  2.50
00201  x-tudo                        R$  7.50
00102  refresco do dia               R$  0.50
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
Codigo Nome                             Preco
00101  coca-colecao                  R$  2.50
00201  x-tudo                        R$  4.61
00102  refresco do dia               R$  0.50
1 - inserir
2 - remover
3 - consultar
4 - alterar
5 - listar
6 - sair
Entre com a sua escolha:
Programa encerrado!
~~~
