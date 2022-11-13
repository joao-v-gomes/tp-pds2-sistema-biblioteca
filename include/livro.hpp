#ifndef LIVRO_H
#define LIVRO_H

#include "cliente.hpp"
#include <string>
#include <vector>

class Livro {
  private:
	int _idLivro;
	std::string _nome;
	std::string _autor;
	std::string _edicao;
	std::string _assunto;
	int _idEstante;
	int _idPrateleira;
	int _quantidade;
	std::vector<Cliente> _reservas;

  public:
	int getIdLivro();
	std::string getNomeLivro();
	std::string getAUtorLivro();
	std::string getAssuntoLivro();
	int getEdicaoLivro();
	int getPrateleiraLivro();
	int getQtdeLivro();
	std::list<Cliente> getReservasLivro();

	void setIdLivro(int id);
	void setNomeLivro(std::string nome);
	void setAutorLivro(std::string autor);
	void setEdicaoLivro(int edicao);
	void setAssuntoLivro(std::string assunto);
	void setIdEstanteLivro(int id);
	void setIdPrateleiraLivro(int id);
	void setQtdeLivro(int quantidade);
}

#endif