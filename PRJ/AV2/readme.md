# PDV (Ponto de Venda)

Uma empresa deseja registrar as vendas de produtos usando um PDV. A partir de uma análise,
obteve-se os requisitos a seguir.  

- Manter um cadastro produtos (inclusão, alteração, exclusão e consulta de produtos).
- Manter um cadastro de clientes (inclusão, alteração, exclusão e consulta de clientes).
- Registrar vendas. Uma venda pode ter mais de um item. A venda pode ser vinculada a um
cliente.
- Registrar a forma de pagamento. A venda pode ser paga em dinheiro ou com cartão de
crédito.
- Atualizar o estoque dos produtos vendidos.
- Registrar a data da última venda de um produto.
- Imprimir a venda (pesquise como fazer impressão usando o Java).
- Imprimir relatório de fechamento de caixa. Neste relatório, devem ser impressos o código e o
valor total de cada venda realizada e o valor total recebido por cada forma de pagamento.
Dados
- Dados do produto: código, nome, unidade, preço, quantidade em estoque e data da última
venda.
- Dados do cliente: código, nome, endereço (os dados do endereço devem ser armazenados
separadamente), telefone e email.
- Dados da venda: data, hora e valor total da venda, cliente (quando houver).
- Dados de um item da venda: código do produto, quantidade vendida, preço , total do item.
Requisitos Técnicos
- Implemente o sistema usando um banco de dados de sua preferência.
- O aplicativo deve ter interface gráfica.

- Use herança e polimorfismo sempre que possível.
- Fazer o controle explícito de transação.  

## Critérios de avaliação  
- Janela principal que permita acesso a todas as funcionalidades do PDV. Até 0,5 ponto.  
- Implementação do cadastro de produto (inclusão, alteração, exclusão, seleção e consulta).   
Serão levados em consideração: a execução correta das operações; controle de transação. Até 0,5 ponto.  
- Implementação do cadastro de clientes (inclusão, alteração, exclusão, seleção e consulta). 
Serão levados em consideração: a execução correta das operações; controle de transação. Até 1 ponto.  
- Implementação do registro de vendas. Será levando em consideração a possibilidade de vincular um cliente com a venda, a inclusão dos itens, a atualização das tabelas em uma
única transação, facilidade de seleção de um cliente, facilidade para localizar um produto e a qualidade visual da interface gráfica. Até 4 pontos.  
- Impressão da venda. Será considerado a impressão de todos os dados da venda. Os itens devem ser impressos na forma de tabela. Até 1 ponto.  
- Impressão do relatório de fechamento de caixa. Será considerado a impressão dos dados da venda e do total recebido de cada forma de pagamento). Até 1 ponto.  
- Técnicas de POO. Serão levados em consideração o uso de encapsulamento, herança e polimorfismo. Até 2 pontos.  
