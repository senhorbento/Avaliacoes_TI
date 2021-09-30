Uma empresa mantém os dados de seus contados em cartões e deseja um sistema de software para facilitar o cadastramento e localização de contatos. Os contados podem ser de quatro tipos: fornecedores, clientes, pessoais e outros. Os dados do fornecedor são: nome, CNPJ, email, e telefone fixo e FAX. Os contatos do cliente são: nome, CNPJ ou CPF, telefone residencial, telefone do trabalho e telefone celular e FAX. Os contatos pessoais possuem os seguintes dados: nome, email, telefone fixo e
telefone celular. Outros tipos de contatos possuem os seguintes dados: nome, email e telefone.

Crie um sistema que permita o usuário a realizar inclusão, alteração, localização e exclusão dos diferentes tipos de contatos. 

- O cadastro de cada contato deve ser feito em uma janela separada.
- Os dados devem ser mantidos em um arquivo. 
- Verificar o CNPJ e o CPF do contato, usando exceções quando estes dados não forem válidos.
- Fique atento para a possibilidade de usar heranças.
- Use a arquitetura em camadas com classes de fronteira (interface) controle (processamento) e entidade (dados). 
- Use janelas diferentes para os cadastros e para a inclusão, atualização e consulta dos dados.
- As janelas de cadastro devem ter tabelas para mostrar os dados dos contatos.
- A aplicativo deve ter uma janela principal com uma barra de menus com um menu, a partir do qual as janelas de cadastros devem ser abertas.
