#ifndef PRATELEIRA_H
#define PRATELEIRA_H

#include "livro.hpp"
#include <string>

class Prateleira {
  private:
	int _idPrateleira;
	std::string _assunto;
	int _estanteId;
	std::list<Livro> livrosDaPrateleira;

  public:
	int getIdPrateleira();
	std::string getAssuntoPrateleira();
	int getEstanteDaPrateleira();
	std::list<Livro> getLivroPrateleira();

	void setIdPrateleira(int id);
	void setAssuntoPrateleira(std::string _assunto);
	void setEstanteDaPrateleira(int idEstante);
	void setListaDeLivros(std::list<Livro> listaDeLivros);
};

#endif