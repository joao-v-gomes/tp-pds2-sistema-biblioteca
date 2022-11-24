#include "prateleira.hpp"

Prateleira::Prateleira() {
}

Prateleira::Prateleira(std::string assunto, int estanteID) {
	_assunto = assunto;
	_estanteId = estanteID;
}

std::string Prateleira::getAssuntoPrateleira() {
	return _assunto;
}

int Prateleira::getIdPrateleira() {
	return _idPrateleira;
}

int Prateleira::getEstanteDaPrateleira() {
	return _estanteId;
}

void Prateleira::setIdPrateleira(int id) {
	_idPrateleira = id;
}

void Prateleira::setEstanteDaPrateleira(int idEstante) {
	_estanteId = idEstante;
}