
//SISTEMA DE PESQUISA & DESENVOLVIMENTO (P&D)

//Bibliotecas que vão auxiliar nas entradas e saidas do Sistema
#include <iostream> // Auxilia na interação sistema e usuario
#include <vector> // Um conteiner que vai armazenar os elementos do mesmo tipo
#include <string> // Representa uma sequencias de caracteres

class Pesquisa {
private:
	struct Projeto
	{
		std::string nome;
		std::string objetivo;
		std::string resultado;
	};
	std::vector<Projeto> projetos;

public:

	void adicionarProjeto(const std::string& nome, const std::string& objetivo, const std::string& resultado) {
		Projeto novoProjeto = { nome, objetivo, resultado };
		projetos.push_back(novoProjeto);
	}

	void mostrarProjetos() const {
		for (const auto& projeto : projetos) {
			std::cout << "Nome: " << projeto.nome << "\n"
				<< "\nObjetivo:" << projeto.objetivo << "\n"
				<< "\nResultado:" << projeto.resultado << "\n"
				<< "-----------------------------\n";
		}

	}

	void buscarProjeto(const std::string& nome) const {
		bool encontrado = false;
		for (const auto& projeto : projetos) {
			if (projeto.nome.fing(nome) != std::string::npos) {
				std::cout << "Nome: " << projeto.nome << "\n"
					<< "Objetivo: " << projeto.objetivo << "\n"
					<< "Resultado: " << projeto.resultado << "\n"
					<< "-----------------------------\n";
				encontrado = true;
			}
		}
		if (!encontrado) {
			std::cout << "Projeto não encontrado.\n";
		}
	}

};
	 
	int main() {
		
		Pesquisa pesquisa;
		// Adicionando novos projetos
		pesquisa.adicionarProjeto("Projeto IA", "Desenvolver um modelo de Machine Learning", "Em progresso");
		pesquisa.adicionarProjeto("Projeto Desenvolvimento Dashboard", "Demonstrar quantidade de chamados da equipe", "Concluido");
		pesquisa.adicionarProjeto("Projeto Big Data", "Analisar grandes volumes de dados", "Concluido");

		pesquisa.mostrarProjetos();

		std::string nomeBusca;
		std::cout << "\nDigite o nome do projeto para buscar: ";
		std::getline(std::cin, nomeBusca);
		pesquisa.buscarProjeto(nomeBusca);

		return 0;
	}




