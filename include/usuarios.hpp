#ifndef USUARIOS_H
#define USUARIOS_H

#include "livro.hpp"
#include <list>
#include <string>

class Usuario {
  private:
	int _id;
	bool _tipoDeUsuario;
	std::string _nome;
	std::string _senha;
	std::string _email;
	std::string _telefone;

  public:
	Usuario();
	Usuario(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone);

	Livro pesquisarLivroPorNome(std::string nomeLivroPesquisado);
	std::list<Livro> pesquisarLivroPorAutor(std::string nomeAutorPesquisado);
	std::list<Livro> pesquisarLivroPorAssunto(std::string assuntoPesquisado);
	virtual std::list<Cliente> pesquisarReserva(Livro livroPesquisado);
	void setId(int id);
	void setNome(std::string nome);
	void setSenha(std::string senha);
	void setEmail(std::string email);
	void setTelefone(std::string telefone);

	int getId();
	std::string getNome();
	std::string getSenha();
	std::string getEmail();
	std::string getTelefone();
}

#endif