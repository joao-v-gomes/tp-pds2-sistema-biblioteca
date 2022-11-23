#include "bibliotecario.hpp"
#include "definitions.hpp"
#include <iostream>

Bibliotecario::Bibliotecario() {
}

Bibliotecario::Bibliotecario(Usuario *usuario) {
	_id = usuario->getId();
	_tipoDeUsuario = usuario->getTipoUsuario();
	_nome = usuario->getNome();
	_senha = usuario->getSenha();
	_email = usuario->getEmail();
	_telefone = usuario->getTelefone();
}

Bibliotecario::Bibliotecario(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone) {
	_id = id;
	_tipoDeUsuario = tipoDeUsuario;
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
}

Bibliotecario::Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone) {
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
}

Bibliotecario::Bibliotecario(std::string nome, std::string email, std::string telefone) {
	_nome = nome;
	_email = email;
	_telefone = telefone;
}

