#include "menu.hpp"

int menuLogin() {
	std::cout << "---- Bem-vindo ao Sistema de Biblioteca 42!!! -----" << std::endl;
	std::cout << "\t-- Faça login para acessar o sistema --\n\n";

	int tipoLogin;

	std::string usuario, senha;

	// std::string textoUsuario = "\tUsuário: ";

	std::cout << "\tUsuário: ";

	std::cin >> usuario;

	// std::string textoSenha = "\tSenha: ";

	std::cout << "\tSenha: ";

	std::cin >> senha;

	std::cout << "Validando login... Aguarde..." << std::endl;

	tipoLogin = verificarLogin(usuario, senha);

	return tipoLogin;
}
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