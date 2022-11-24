#ifndef LIVRO_H
#define LIVRO_H

// #include "cliente.hpp"
#include <string>
#include <vector>

// class Cliente;

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
	// std::vector<Cliente> _reservas;

  public:
	Livro();
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto);
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto, int qtde, int idEstante, int idPrateleira);

	int getIdLivro();
	std::string getNomeLivro();
	std::string getAutorLivro();
	std::string getAssuntoLivro();
	std::string getEdicaoLivro();
	int getPrateleiraLivro();
	int getEstanteLivro();
	int getQtdeLivro();
	// std::list<Cliente> getReservasLivro();

	void setIdLivro(int id);
	void setNomeLivro(std::string nome);
	void setAutorLivro(std::string autor);
	void setEdicaoLivro(int edicao);
	void setAssuntoLivro(std::string assunto);
	void setIdEstanteLivro(int idEstante);
	void setIdPrateleiraLivro(int idPrateleira);
	void setQtdeLivro(int quantidade);
};

#endif
