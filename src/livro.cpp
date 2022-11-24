#include "livro.hpp"

Livro::Livro(std::string nome, std::string autor, std::string edicao, std::string assunto) {
	_nome = nome;
	_autor = autor;
	_edicao = edicao;
	_assunto = assunto;
}

Livro::Livro(std::string nome, std::string autor, std::string edicao, std::string assunto, int qtde, int idEstante, int idPrateleira) {
	_nome = nome;
	_autor = autor;
	_edicao = edicao;
	_assunto = assunto;
	_quantidade = qtde;
	_idEstante = idEstante;
	_idPrateleira = idPrateleira;
}

int Livro::getIdLivro() {
	return _idLivro;
}

std::string Livro::getNomeLivro() {
	return _nome;
}

std::string Livro::getAutorLivro() {
	return _autor;
}

std::string Livro::getAssuntoLivro() {
	return _assunto;
}

std::string Livro::getEdicaoLivro() {
	return _edicao;
}

int Livro::getPrateleiraLivro() {
	return _idPrateleira;
}

int Livro::getEstanteLivro() {
	return _idEstante;
}

int Livro::getQtdeLivro() {
	return _quantidade;
}