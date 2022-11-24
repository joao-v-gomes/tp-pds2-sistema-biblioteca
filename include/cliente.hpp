#ifndef CLIENTE_H
#define CLIENTE_H

#include "livro.hpp"
#include "usuarios.hpp"
#include <iostream>
#include <list>

class Cliente : public Usuario {
  private:
	std::list<Livro *> _livrosEmprestados;
	double _multa;

  public:
	Cliente();
	Cliente(Usuario *usuario);
	Cliente(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone);
	Cliente(std::string nome, std::string senha, std::string email, std::string telefone);
	Cliente(std::string nome, std::string email, std::string telefone);
	void reservarLivro(Livro *livro);
	void renovarReservar(Livro *livro);
	void pagarMulta(double multa);
	std::list<Cliente> pesquisarReserva(Livro livro);
	int getIdCliente();
	std::list<Livro *> getLivrosEmprestados();
	double getMulta();
	void setTipoUsuario(bool tipoUsuario);
	void setMulta(double multa);

	virtual int exibeMenu() const override;

	virtual ~Cliente() = default;
};

#endif