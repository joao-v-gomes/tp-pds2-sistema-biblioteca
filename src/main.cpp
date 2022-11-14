#include "definitions.hpp"
#include <iostream>
#include <string>

int main() {
	std::cout << "---- Bem-vindo ao Sistema de Biblioteca 42!!! -----" << std::endl;
	std::cout << "\t-- O que voce deseja fazer? --\n\n";

	int opcao;

	std::string textoLogin = "\t0 - Logar como Bilbiotecario \n\t1 - Logar como Cliente \n";

	std::cout << textoLogin << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	switch (opcao) {
		case LOGIN_BIBLIOTECARIO:
			std::cout << "Login como bibliotecario" << std::endl;
			break;
		case LOGIN_USUARIO:
			std::cout << "Login como usuario" << std::endl;
			break;
		default:
			std::cout << "Login com problema! Tente novamente!" << std::endl;
			break;
	}
	std::string textoMenuUsuario = "1 - Pesquisar livro pelo nome \n \
							2 - Pesquisar livro pelo autor \n \
							3 - Pesquisar livro pelo assunto \n \
							4 - Pesquisar reservas de livros \n ";

	return 0;
}