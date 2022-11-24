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

int Prateleira::getEstanteDaPrateleira() {
	return _estanteId;
}