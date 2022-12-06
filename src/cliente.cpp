#include "cliente.hpp"
#include "erros.hpp"
#include <exception>

Cliente::Cliente(Usuario *usuario) {
	_id = usuario->getId();
	_tipoDeUsuario = usuario->getTipoUsuario();
	_nome = usuario->getNome();
	_senha = usuario->getSenha();
	_email = usuario->getEmail();
	_telefone = usuario->getTelefone();
}

Cliente::Cliente(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone) {
	_id = id;
	_tipoDeUsuario = tipoDeUsuario;
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
}

Cliente::Cliente(std::string nome, std::string senha, std::string email, std::string telefone) {
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
}

Cliente::Cliente(std::string nome, std::string email, std::string telefone) {
	_nome = nome;
	_email = email;
	_telefone = telefone;
}

int Cliente::exibeMenu() const {
	std::string textoMenuCliente =
		"1 - Pesquisar livro pelo nome \n"
		"2 - Pesquisar livro pelo autor \n"
		"3 - Pesquisar livro pelo assunto \n"
		"4 - Pesquisar reservas de livros \n"
		"5 - Conferir lista de livros emprestados \n"
		"6 - Conferir valor da multa \n"
		"7 - Pagar multa \n"
		"8 - Ver perfil \n"
		"9 - Logoff \n"
		"10 - Sair \n";

	int opcao;

	std::cout << textoMenuCliente << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;
	if(opcao < 1 || opcao > 10){
		throw opcaoInvalida();
	}
	return opcao;
}