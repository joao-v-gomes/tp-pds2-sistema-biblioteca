#include "definitions.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>

int main() {
	int opcao;

	while (opcao != -1) {

		opcao = menuInicial();

		switch (opcao) {
			case LOGIN_BIBLIOTECARIO:
				int opcao_bibliotecario;
				std::cout << "Login como bibliotecario" << std::endl;

				opcao_bibliotecario = menuBibliotecario();

				switch (opcao_bibliotecario) {
					default:
						std::cout << "Opcao invalida! Tente novamente!" << std::endl;
						break;
				}

				break;
			case LOGIN_USUARIO:
				int opcao_usuario;
				std::cout << "Login como usuario" << std::endl;

				opcao_usuario = menuUsuario();

				switch (opcao_usuario) {
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
