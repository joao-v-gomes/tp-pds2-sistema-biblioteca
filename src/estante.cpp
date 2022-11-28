#include "estante.hpp"

Estante::Estante() {
}

Estante::Estante(std::string categoria) {
	_categoria = categoria;
}

std::string Estante::getCategoria() {
	return _categoria;
}

int Estante::getIdEstante(){
	return _idEstante;
}

std::string Estante::getCategoria(){
	return _categoria;
}