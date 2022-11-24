#ifndef ESTANTE_H
#define ESTANTE_H

#include "prateleira.hpp"
#include <list>
#include <string>

class Estante {
  private:
	int _idEstante;
	std::string _categoria;
	std::list<Prateleira> _prateleiras;

  public:
	Estante();
	Estante(std::string categoria);
	int getIdEstante();
	std::string getCategoria();
	std::list<Prateleira> getPrateleiras();

	void setIdEstante(int id);
	void setCategoria(std::string categoria);
	void setPrateleiras(std::list<Prateleira> listaPrateleiras);
};

#endif