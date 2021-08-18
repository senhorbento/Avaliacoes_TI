# Agenda de contatos

Fazer uma agenda de contatos, onde deve ser possível realizar as seguintes operações:

1. inserir um contato
2. remover um contato dado o email
3. listar todos os contatos

Cada contato tem: Nome, email e telefone.  
Os dados da agenda não podem estar em vetores, devem estar em alguma estrutura dinâmica (lista, pilha ou fila)

## Entrada
A entrada de dados é uma sequencia de digitação do usuário, onde ele fica em um loop e escolhe:  
A opção do menu um numero inteiro (1.inserir, 2.remover, 3 listas, 4 sair) na sequencia lê os dados necessário para completar a operação escolhida.
~~~
1
joao da silva
jsila@gmail.com
+55 32 1234-4321
1
Maria da Fonseca Filha
maria.fonseca@bol.com.br
+55 54 98765-2345
1
Jou A Kin
kin.jou@tetaco.nacara.com.jp
+23 12 12345-6789
3
4

1
joao da silva
jsila@gmail.com
+55 32 1234-4321
3
1
Maria da Fonseca Filha
maria.fonseca@bol.com.br
+55 54 98765-2345
3
2
maria.fonseca@bol.com
3
1
Jou A Kin
kin.jou@tetaco.nacara.com.jp
+23 12 12345-6789
3
2
kin
3
2
maria.fonseca@bol.com.br
3
2
kin.jou@tetaco.nacara.com.jp
3
2
jsila@gmail.com
3
1
Manuael da Silva
manuel@silva.com.pt
+12 34 56789-1234
3
4
~~~

## Saída

Consiste na resposta do sistema para cada ação do usuário, sempre mostrando o menu de opções.
~~~
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
Maria da Fonseca Filha        maria.fonseca@bol.com.br         +55 54 98765-2345
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
Maria da Fonseca Filha        maria.fonseca@bol.com.br         +55 54 98765-2345
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
Maria da Fonseca Filha        maria.fonseca@bol.com.br         +55 54 98765-2345
Jou A Kin                     kin.jou@tetaco.nacara.com.jp     +23 12 12345-6789
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
Maria da Fonseca Filha        maria.fonseca@bol.com.br         +55 54 98765-2345
Jou A Kin                     kin.jou@tetaco.nacara.com.jp     +23 12 12345-6789
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
Jou A Kin                     kin.jou@tetaco.nacara.com.jp     +23 12 12345-6789
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
joao da silva                 jsila@gmail.com                   +55 32 1234-4321
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Nome                          Email                                     Telefone
Manuael da Silva              manuel@silva.com.pt              +12 34 56789-1234
1 - inserir
2 - remover
3 - listar
4 - sair
Entre com a sua escolha:
Programa encerrado!
~~~

