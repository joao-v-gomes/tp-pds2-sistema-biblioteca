#include "menu.hpp"

int menuLogin() {
	std::cout << "---- Bem-vindo ao Sistema de Biblioteca 42!!! -----" << std::endl;
	std::cout << "\t-- O que voce deseja fazer? --\n\n";

	int opcao;

	std::string textoLogin = "\t0 - Logar como Bilbiotecario \n\t1 - Logar como Cliente \n";

	std::cout << textoLogin << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}

int menuUsuario() {
	std::string textoMenuUsuario = "1 - Pesquisar livro pelo nome \n\
2 - Pesquisar livro pelo autor \n\
3 - Pesquisar livro pelo assunto \n\
4 - Pesquisar reservas de livros \n\
5 - Conferir lista de livros emprestados \n\
6 - Conferir valor da multa \n\
7 - Pagar multa \n\
8 - Ver perfil \n";

	int opcao;

	std::cout << textoMenuUsuario << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}

int menuBibliotecario() {
	std::string textoMenuBibliotecario = "1 - Pesquisar livro pelo nome \n\
2 - Pesquisar livro pelo autor \n\
3 - Pesquisar livro pelo assunto \n\
4 - Pesquisar reservas de livros \n\
5 - Emprestar livro \n\
6 - Cadastrar livro \n\
7 - Cadastrar prateleira \n\
8 - Cadastrar estante \n\
9 - Ver perfil \n";

	int opcao;

	std::cout << textoMenuBibliotecario << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}