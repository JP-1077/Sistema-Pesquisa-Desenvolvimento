# 🌐 **Sistema-Pesquisa-Desenvolvimento**

![bro](https://github.com/user-attachments/assets/93047f0f-fda0-4560-b002-08b78221b51f)

#

## 1. **Introdução**
Este sistema de gerenciamento e controle de projetos para área de Pesquisa e Desenvolvimento (P&D), foi desenvolvido em C++ para auxiliar uma organização na administração de projetos de pesquisas e desenvolvimento. Neste sentido, ele permite que os usuários registrem, busquem e organizem projetos e com isso possam otimizar seus processos de gerenciamento de informações essenciais como nome, objetivo e resultados de cada projeto.

#

## 2. **Requisitos Funcionais**
* `Cadastro de Projetos:` O sistema deve permitir o registro de novos projetos com atributos de nome, objetivo e resultado.

* `Exibição de Projetos:` É possível listar todos os projetos cadastrados, com detalhes completos.

* `Busca de Projetos:` Oferece recursos para a busca de projetos pelo nome, exibindo os detalhes do projeto correspondente.

* `Organização dos Projetos:` Organizar projetos em ordem alfabética com base no nome, objetivo ou resultado, conforme a necessidade do usuário.

#

## 2. **Requisitos Não Funcionais**

* `Usabilidade` Interface intuitiva e interativa, facilitando a entrada e consulta de dados por usuários de qualquer nível.

* `Desempenho:` Operações de consulta e organização devem ser rápidas e eficientes, mesmo com grandes volumes de projetos.

*  `Portabilidade:` O sistema, pode ser executável em diversos sistemas operacionais (Windows, Linux e MacOS).

#

## 3. **Diagrama do Sistema**

O diagrama a seguir representa a relação entre os principais componentes, como a classe Pesquisa e a estrutura do projeto, além das principais operações: Adicionar Projeto, Mostrar Projetos, Buscar Projeto e Organizar Projeto.

![image](https://github.com/user-attachments/assets/471de85e-562b-4e7f-b1b6-a028f709fae6)

#

## 4. Arquitetura do Sistema

O sistema segue uma arquitetura modular com camadas que incluem dados, lógica de negócio e interface do usuário:

* `Camada de Dados:` Representada pelo vetor de projetos que está dentro da classe Pesquisa, armazenando as informações de cada projeto.

* `Camada de Lógica de Negócio:` Implementada nos métodos da classe Pesquisa que manipulam e organizam os dados (métodos de adição, busca, exibição e ordenação).

* `Camada de Interface de Usuário:` Interação com o usuário via console (std::cout e std::cin), permitindo a entrada e exibição de dados.

#

## 5. Funcionalidade do Sistema

Abaixo, uma descrição detalhada das principais funcionalidades:

* `Cadastro de Projetos:` Permite ao usuário inserir informações de um novo projeto, como nome, objetivo e resultado.

* `Exibição de Projetos:` Lista todos os projetos com suas informações completas.

* `Busca de Projetos:` Funcionalidade para localizar um projeto específico pelo nome.

* `Organização dos Projetos:` Permite ao usuário ordenar os projetos com base em critérios alfabéticos.


## 6. Conclusão

Com funcionalidades focadas na usabilidade e no desempenho, o sistema atende aos principais requisitos funcionais e não funcionais para ambientes de P&D, fornecendo uma solução prática para gerenciar informações e promover a produtividade no desenvolvimento de novos projetos.




