#include "cliente.hpp"

Cliente::Cliente(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone) {
	_id = id;
	_tipoDeUsuario = tipoDeUsuario;
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
};

Cliente::Cliente(std::string nome, std::string senha, std::string email, std::string telefone) {
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
};