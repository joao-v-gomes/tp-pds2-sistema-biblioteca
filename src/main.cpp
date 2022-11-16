#include "definitions.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>

int main() {
	int opcao = INIT;

	while (opcao != -1) {

		switch (opcao) {
			case INIT:
				// colocar o try-throw-catch aqui pra pegar alguma merda que o usuario digitar
				// caso der merda, fazer a opcao voltar pro INIT e executar o login novamente
				opcao = menuLogin();
				// std::cout << "Digitou: " << opcao << std::endl;
				break;
			case LOGIN_BIBLIOTECARIO:
				// depois faremos a validacao do login
				std::cout << "Login como bibliotecario" << std::endl;
				opcao = MENU_BIBLIOTECARIO;

				break;
			case LOGIN_USUARIO:
				// depois faremos a validacao do login
				std::cout << "Login como usuario" << std::endl;
				opcao = MENU_USUARIO;

				break;
			case MENU_USUARIO:
				int opcao_usuario;
				// colocar try-throw-catch aqui tambem
				// se der merda, falar com o usuario e retornar pro menuUsuario
				opcao_usuario = menuUsuario();

				switch (opcao_usuario) {
					case PESQUISAR_LIVRO_NOME_USUARIO:
						break;
					case PESQUISAR_LIVRO_AUTOR_USUARIO:
						break;
					case PESQUISAR_LIVRO_ASSUNTO_USUARIO:
						break;
					case PESQUISAR_RESERVAS_USUARIO:
						break;
					case CONFERIR_LISTA_EMPRESTIMOS_USUARIO:
						break;
					case CONFERIR_VALOR_MULTA_USUARIO:
						break;
					case PAGAR_MULTA_USUARIO:
						break;
					case VER_PERFIL_USUARIO:
						break;
					case LOGOFF_USUARIO:
						break;
					default:
						std::cout << "Opcao invalida! Tente novamente!" << std::endl;
						break;
				}
				break;
			case MENU_BIBLIOTECARIO:
				int opcao_bibliotecario;
				// colocar try-throw-catch aqui tambem
				// se der merda, falar com o usuario e retornar pro menuUsuario
				opcao_bibliotecario = menuBibliotecario();

				switch (opcao_bibliotecario) {
					case PESQUISAR_LIVRO_NOME_BIBLIOTECARIO:
						break;
					case PESQUISAR_LIVRO_AUTOR_BIBLIOTECARIO:
						break;
					case PESQUISAR_LIVRO_ASSUNTO_BIBLIOTECARIO:
						break;
					case PESQUISAR_RESERVAS_BIBLIOTECARIO:
						break;
					case EMPRESTAR_LIVRO_BIBLIOTECARIO:
						break;
					case CADASTRAR_LIVRO_BIBLIOTECARIO:
						break;
					case CADASTRAR_PRATELEIRA_BIBLIOTECARIO:
						break;
					case CADASTRAR_ESTANTE_BIBLIOTECARIO:
						break;
					case VER_PERFIL_BIBLIOTECARIO:
						break;
					case LOGOFF_BIBLIOTECARIO:
						break;
					default:
						std::cout << "Opcao invalida! Tente novamente!" << std::endl;
						break;
				}
				break;
			case SAIR:
				std::cout << "Saindo..." << std::endl;
				break;
			default:
				std::cout << "Login com problema! Tente novamente!" << std::endl;
				break;
		}
	}

	return 0;
}
