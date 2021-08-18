Exercicios:

1-(2.5) Fazer uma agenda de contatos, onde deve ser possivel realizar as seguintes operacoes:
  1. inserir um contato
  2. remover um contato dado o email
  3. listar todos os contatos
  4. listar os contatos dado parte do nome, email ou telefone.

Cada contato tem: Nome, email e telefone
precisa usar arquivo (texto ou binario) no inicio do programa se o arquivo existir este deve ser lido e no final deve ser gravado (ref: aula-2020-11-04-Eleicao-parte 4 - arqTxt.c).


2-(3.0) Sua empresa foi contratada para fazer um programa para controlar o estoque de uma loja de brinquedos. 
   Para cada brinquedo temos: 
	codigo: inteiro, 
	categoria : string[20], 
	nome : string[30], 
	preco : real, 
	quantidade : inteiro

   no programa dever ser possivel realizar as seguintes operacoes:
    1. inserir brinquedo
	dado o codigo do brinquedo veja se ele ja existe ou nao 
		se ja existir solicite a quantidade e adicione a quantidade lida ao brinquedo ja existente
                se nao existir solicite todos os dados e adicione o novo brinquedo
    2. remover brinquedo  (dado o codigo e a qtd)
        se a qtd for zero remover o registro do brinquedo
        se a qtd > 0 diminuir a quantidade (validar se tem aquela qtd) 
    3. atualizar dados do brinquedo
    4. listar todos
    5. listar todos de uma categoria
    6. listar filtrando por parte do nome ou categoria (obs da uma olhada na funcao strstr)
   
3-(2.5) Fazer o jogo da velha para 2 dois jogadores

4-(2.0) Fazer um programa que leia dois conjuntos de numeros reais A e B (no maximo 100), na sequencia mostre
   I - a uniao dos conjuntos A U B
  II - a intersecção entre os conjuntos A  B
 III - a diferença A - B
	
obs: conjuntos nao tem elementos repetidos, logo isso deve ser garantido em todas as operacoes
