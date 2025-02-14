
//SISTEMA GERENCIAMENTO DE PESQUISA E DESENVOLVIMENTO P&D

// Estrutura Geral
// O código abaixo implementa um sistema simples de gerenciamento de projetos para a area de 
// Pesquisa e Desenvolvimento (P&D) de uma organização.

// Importação das bibliotecas
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Classe com nome Pesquisa que vai armazenar os objetos dos sistemas
class Pesquisa {
private:
    struct Projeto {
        std::string nome; //Atributo 1 da minha estrutura Projeto
        std::string objetivo; //Atributo 2 da minha estrutura Projeto
        std::string resultado; //Atributo 3 da minha estrutura Projeto
    };
    std::vector<Projeto> projetos;

    //Métodos estáticos: Funções que tem o objetivos de ordenar os projetos a partir de criterios
    static bool ordenarPorNome(const Projeto& a, const Projeto& b) {
        return a.nome < b.nome;
    }
    static bool ordenarPorObjetivo(const Projeto& a, const Projeto& b) {
        return a.objetivo < b.objetivo;
    }
    static bool ordenarPorResultado(const Projeto& a, const Projeto& b) {
        return a.resultado < b.resultado;
    }

    // Funcionalidades do Sistema:
    /* adicionarProjeto(): Solicita ao usuário o nome, objetivo e resultado do projeto
       mostrarProjetos(): Percorre o vetor projetos e com isso vai exibir as informações de cada projeto
       buscarProjeto(): Solicita ao usuário o nome do projeto a ser buscado, e com isso vai percorrer o vetor para buscar as informações
       organizarProjetos(): Permite ao usuário um criterio de ordenação (nome, objetivo ou resultado)
    */
public:
    void adicionarProjeto() {
        std::string nome, objetivo, resultado;
        std::cout << "Digite o nome do projeto: ";
        std::getline(std::cin, nome);
        std::cout << "Digite o objetivo do projeto: ";
        std::getline(std::cin, objetivo);
        std::cout << "Digite o resultado do projeto: ";
        std::getline(std::cin, resultado);

        if (!nome.empty() && !objetivo.empty() && !resultado.empty()) {
            projetos.push_back({ nome, objetivo, resultado });
            std::cout << "\nProjeto adicionado com sucesso!\n";
        }
        else {
            std::cout << "\nErro: Todos os campos sao obrigatorios. \n";
        }
    }

    void mostrarProjetos() const {
        if (projetos.empty()) {
            std::cout << "\nNenhum projeto cadastrado. \n";
            return;
        }
        for (const auto& projeto : projetos) {
            std::cout << "Nome: " << projeto.nome << "\n"
                << "Objetivo: " << projeto.objetivo << "\n"
                << "Resultado: " << projeto.resultado << "\n"
                << "---------------------------- - \n";
        }
    }

    void buscarProjeto() const {
        std::string nome;
        std::cout << "\nDigite o nome do projeto que deseja buscar: ";
        std::getline(std::cin, nome);
        bool encontrado = false;
        for (const auto& projeto : projetos) {
            if (projeto.nome.find(nome) != std::string::npos) {
                std::cout << "Nome: " << projeto.nome << "\n"
                    << "Objetivo: " << projeto.objetivo << "\n"
                    << "Resultado: " << projeto.resultado << "\n"
                    << "-----------------------------\n";
                encontrado = true;
            }
        }
        if (!encontrado) {
            std::cout << "Projeto nao encontrado.\n";
        }
    }

    void organizarProjetos() {
        int opcao;
        std::cout << "\nEscolha uma opçao de ordenacao:\n";
        std::cout << "1. Ordenar por Nome\n";
        std::cout << "2. Ordenar por Objetivo\n";
        std::cout << "3. Ordenar por Resultado\n";
        std::cout << "Opcao: ";
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao) {
        case 1:
            std::sort(projetos.begin(), projetos.end(), ordenarPorNome);
            std::cout << "\nProjetos ordenados por Nome.\n";
            break;
        case 2:
            std::sort(projetos.begin(), projetos.end(), ordenarPorObjetivo);
            std::cout << "\nProjetos ordenados por Objetivo.\n";
            break;
        case 3:
            std::sort(projetos.begin(), projetos.end(), ordenarPorResultado);
            std::cout << "\nProjetos ordenados por Resultado.\n";
            break;
        default:
            std::cout << "\nOpção Invalida.\n";
            return;
        }
        mostrarProjetos();
    }
};

/* O que essa parte do código faz?
   Essa seria basicamente a função principal do programa, o ponte de partida da execução.
   Defsta forma, é aqui que o sistema de gerenciamento de projetos é inicializado e interage com o usuário.
*/

//Cria uma instancia da classe Pesquisa. 
// Essa instancia será usada para chamar as funções que manipulam os projetos.
int main() {
    Pesquisa pesquisa;
    int opcao;
    // Exibição das mensagens na tela, apresentando aos usuarios as opçoes disponiveis.
    std::cout << "======================================\n";
    std::cout << " Bem - vindo ao Sistema de Pesquisa & Desenvolvimento (P&D)\n";
    std::cout << "======================================\n\n";
    // Laço do-while: Laço de repetição que cria um menu interativo. Ele sempre vai repetir as opções a nao ser a opção diferente de 5.
    do {
        std::cout << "\nSelecione uma opcao:\n";
        std::cout << "1. Adicionar Projeto\n";
        std::cout << "2. Listar Projetos\n";
        std::cout << "3. Buscar Projeto\n";
        std::cout << "4. Organizar Projetos\n";
        std::cout << "5. Sair\n";
        std::cout << "Opcao: ";
        std::cin >> opcao;
        std::cin.ignore(); // Limpar o buffer
        //Avalia o valor da variavel opcao e executa a ação correspondente que o usuario escolheu.
        switch (opcao) {
            // Caso 1: Chama a função adicionarProjeto() para adicionar um novo projeto.
        case 1:
            pesquisa.adicionarProjeto();
            break;
            // Caso 2: Chama a função mostrarProjetos() para listar todos os projetos
        case 2:
            pesquisa.mostrarProjetos();
            break;
            // Caso 3: Chama a função buscarProjeto() para buscar um projeto especifico
        case 3:
            pesquisa.buscarProjeto();
            break;
            // Caso 4: Chama a função organizarProjetos() para ordenar os projetos com base em criterios.
        case 4:
            pesquisa.organizarProjetos();
            break;
            // Caso 5: Imprime uma mensagem de despedida e sai do loop.
        case 5:
            std::cout << "\nSaindo do sistema. Ate logo!\n";
            break;
            // Default: Caso a resposta do usuario seja invalida, exibe uma mensagem de erro.
        default:
            std::cout << "\nOpcao Invalida. Tente novamente.\n";
            break;
        }
    } while (opcao != 5);

    return 0;
}




