#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "cliente.hpp"
#include "livro.hpp"
#include "usuarios.hpp"
#include <list>

class Bibliotecario : public Usuario {
  private:
  public:
	void emprestarLivro(Cliente *cliente, Livro *livro);
	void cadastrarLivro(Livro livro);
	void cadastrarPrateleira(Prateleira *prateleira);
	void cadastrarEstante(Estante *estante);
	void cadastrarCliente(Cliente cliente);
	std::list<Cliente> pesquisarReserva(Livro livro);
};

#endif