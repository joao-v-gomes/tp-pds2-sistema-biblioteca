#include "estante.hpp"

Estante::Estante() {
}

Estante::Estante(std::string categoria) {
	_categoria = categoria;
}

int Estante::getIdEstante(){
	return _idEstante;
}

std::string Estante::getCategoria() {
	return _categoria;
}

std::list<Prateleira> getPrateleiras(){
	return _prateleiras;
}

void setIdEstante(int id){
	_idEstante = id;
}

void setCategoria(std::string categoria){
	_categoria = categoria;
}

void setPrateleiras(std::list<Prateleira> listaPrateleiras){
	_prateleiras = listaPrateleiras;
}