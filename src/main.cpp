#include "definitions.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>
#include "erros.hpp"

int main() {

	int opcao = INIT;

	Usuario user;
	int erro = 1;

	while (opcao != SAIR) {

		switch (opcao) {
			case INIT:
					do{
					try{
						opcao = menuLogin(&user);
						erro = 0;
						
					} catch(std::exception& e){
						std::cout <<"Erro: "<< e.what() <<std::endl;
					}
					}while(erro);

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

			case LOGIN_FEITO:

				std::cout << "Olá " << user.getNome() << "!" << std::endl;
				std::cout << "O que deseja fazer hoje?" << std::endl;
				std::cout << std::endl;

				if (user.getTipoUsuario() == LOGIN_BIBLIOTECARIO) {
					opcao = MENU_BIBLIOTECARIO;
				} else {
					opcao = MENU_CLIENTE;
				}
				break;

			case MENU_CLIENTE: {
				int opcao_cliente;

				Cliente *c = new Cliente(&user);

				try{
                    opcao_cliente = c->exibeMenu();
                }catch(opcaoInvalida& e){
                    std::cout <<"Erro: "<< e.what() <<std::endl;
                }

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
					case SAIR_CLIENTE:
						opcao = SAIR;
						break;
					default:
						std::cout << "Tente novamente!" << std::endl;
						break;
				}
				delete c;
			}

			break;

			case MENU_BIBLIOTECARIO: {

				int opcao_bibliotecario;

				Bibliotecario *b = new Bibliotecario(&user);

				try{
				opcao_bibliotecario = b->exibeMenu();
				} catch(opcaoInvalida& e){
					 std::cout <<"Erro: "<< e.what() <<std::endl;
				}

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
					case SAIR_BIBLIOTECARIO:
						opcao = SAIR;
						break;
					default:
						std::cout << "Tente novamente!" << std::endl;
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
