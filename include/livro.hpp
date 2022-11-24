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
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto);
	// Livro();
	//  Livro(int idLivro, String nome,int idPrateleira,int quantidade,int idEstante,int idPrateleira
	//        string autor,string edicao,string assunto);
	// int getIdLivro ()const {return _idLivro;}
	// std::string getNomeLivro() const{return _nome;}
	// std::string getAutorLivro();const{return _autor;}
	// std::string getAssuntoLivro();const{return _assunto;}
	// int getEdicaoLivro();const{return _edicao;};
	// int getPrateleiraLivro();const{return _idPrateleira;}
	// int getQtdeLivro();const{return _quantidade;}
	// std::list<Cliente> getReservasLivro();const{return listCliente;}

	// void setIdLivro(int id); {_id = id}
	// void setNomeLivro(std::string nome){_nome = nome;}
	// void setAutorLivro(std::string autor){_autor = autor;}
	// void setEdicaoLivro(int edicao){_edicao = edicao;}
	// void setAssuntoLivro(std::string assunto){_assunto = assunto;}
	// void setIdEstanteLivro(int idEstante){_idEstante = idEstante;}
	// void setIdPrateleiraLivro(int idPrateleira){_idPrateleira = idPrateleira;}
	// void setQtdeLivro(int quantidade){_quantidade = quantidade;}
};

#endif
