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
	void cadastrarLivro(Livro livro);
	void cadastrarPrateleira(Prateleira *prateleira);
	void cadastrarEstante(Estante *estante);
	void cadastrarCliente(Cliente cliente);
	std::list<Cliente> pesquisarReserva(Livro livro);
};

#endif