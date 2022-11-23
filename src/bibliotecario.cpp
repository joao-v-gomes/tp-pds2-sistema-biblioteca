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

void Bibliotecario::cadastrarCliente(Cliente cliente) {
	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {

		pqxx::work W(C);

		std::string sql = "INSERT INTO usuarios (NOME,SENHA,TIPO_USUARIO,EMAIL,TELEFONE) VALUES ('" + cliente.getNome() + "','" + cliente.getSenha() + "',True,'" + cliente.getEmail() + "','" + cliente.getTelefone() + "');";

		// std::cout << "sql: " << sql << std::endl;

		W.exec(sql);

		W.commit();

		std::cout << "Cliente cadastrado com sucesso!" << std::endl;
	} else {
		std::cout << "Falha no BD - Cadastro Cliente" << std::endl;
	};
}