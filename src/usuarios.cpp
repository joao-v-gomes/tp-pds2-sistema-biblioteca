#include "usuarios.hpp"

// Usuario::Usuario();
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