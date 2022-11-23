#include "usuarios.hpp"
Usuario::Usuario(){};

Usuario::Usuario(std::string nome, std::string email, std::string telefone) {
	_nome = nome;
	_email = email;
	_telefone = telefone;
}
std::string Usuario::getNome() {
	return _nome;
}

std::string Usuario::getSenha() {
	return _senha;
}

std::string Usuario::getEmail() {
	return _email;
}

std::string Usuario::getTelefone() {
	return _telefone;
}