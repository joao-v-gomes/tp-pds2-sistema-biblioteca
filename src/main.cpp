#include "definitions.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>

int main() {

	// teste

	int opcao = INIT;

	Usuario user;

	while (opcao != SAIR) {

		switch (opcao) {
			case INIT:
				// colocar o try-throw-catch aqui pra pegar alguma merda que o usuario digitar
				// caso der merda, fazer a opcao voltar pro INIT e executar o login novamente
				opcao = menuLogin(&user);

				// std::cout << user.getNome() << std::endl;
				// std::cout << user.getEmail() << std::endl;
				// std::cout << user.getTelefone() << std::endl;

				// std::cout << "Digitou: " << opcao << std::endl;

				if (opcao == LOGIN_ERRO) {
					opcao = INIT;
				}

				break;

			case LOGIN_BIBLIOTECARIO:
				// depois faremos a validacao do login
				std::cout << "Login como bibliotecario" << std::endl;
				opcao = MENU_BIBLIOTECARIO;

				break;

			case LOGIN_CLIENTE:
				// depois faremos a validacao do login
				std::cout << "Login como cliente" << std::endl;
				opcao = MENU_CLIENTE;

				break;

			case MENU_CLIENTE: {
				int opcao_cliente;

				Cliente *c = new Cliente(&user);

				// colocar try-throw-catch aqui tambem
				// se der merda, falar com o cliente e retornar pro menuCliente
				// opcao_cliente = menuCliente();
				opcao_cliente = c->exibeMenu();

				switch (opcao_cliente) {
					case PESQUISAR_LIVRO_NOME_CLIENTE:
						break;
					case PESQUISAR_LIVRO_AUTOR_CLIENTE:
						break;
					case PESQUISAR_LIVRO_ASSUNTO_CLIENTE:
						break;
					case PESQUISAR_RESERVAS_CLIENTE:
						break;
					case CONFERIR_LISTA_EMPRESTIMOS_CLIENTE:
						break;
					case CONFERIR_VALOR_MULTA_CLIENTE:
						break;
					case PAGAR_MULTA_CLIENTE:
						break;
					case VER_PERFIL_CLIENTE:
						break;
					case LOGOFF_CLIENTE:
						opcao = INIT;
						break;
					default:
						std::cout << "Opcao invalida! Tente novamente!" << std::endl;
						break;
				}
				delete c;
			}

			break;

			case MENU_BIBLIOTECARIO: {

				int opcao_bibliotecario;

				// user = new Bibliotecario(user);
				Bibliotecario *b = new Bibliotecario(&user);

				// colocar try-throw-catch aqui tambem
				// se der merda, falar com o usuario e retornar pro menuUsuario
				// opcao_bibliotecario = menuBibliotecario();
				opcao_bibliotecario = b->exibeMenu();

				std::cout << "Opcao: " << opcao_bibliotecario << std::endl;

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
					case CADASTRAR_CLIENTE_BIBLIOTECARIO:
						b->cadastrarCliente();
						break;
					case CADASTRAR_LIVRO_BIBLIOTECARIO:
						b->cadastrarLivro(b);
						break;
					case CADASTRAR_PRATELEIRA_BIBLIOTECARIO:
						b->cadastrarPrateleira(b);
						break;
					case CADASTRAR_ESTANTE_BIBLIOTECARIO:
						b->cadastrarEstante();
						break;
					case VER_PERFIL_BIBLIOTECARIO:
						break;
					case LOGOFF_BIBLIOTECARIO:
						opcao = INIT;
						break;
					default:
						std::cout << "Opcao invalida! Tente novamente!" << std::endl;
						break;
				}
				delete b;
			}

			break;

			case SAIR:
				std::cout << "Saindo..." << std::endl;
				break;

			default:
				std::cout << "Login invalido! Tente novamente!" << std::endl;
				break;
		}
	}

	return 0;
}
