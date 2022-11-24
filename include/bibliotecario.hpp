#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "cliente.hpp"
#include "estante.hpp"
#include "livro.hpp"
#include "prateleira.hpp"
#include "usuarios.hpp"
#include <list>

class Bibliotecario : public Usuario {
  private:
  public:
	Bibliotecario();
	Bibliotecario(Usuario *usuario);
	Bibliotecario(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone);
	Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone);
	Bibliotecario(std::string nome, std::string email, std::string telefone);
	///
	void emprestarLivro(Cliente *cliente, Livro *livro);
	void cadastrarLivro();
	void cadastrarPrateleira(Bibliotecario *b);
	void cadastrarEstante();
	void cadastrarCliente();
	std::list<Cliente> pesquisarReserva(Livro livro);

	int buscaEstanteIDnobanco(std::string categoria);
};

#endif