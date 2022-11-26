#ifndef LIVRO_H
#define LIVRO_H

// #include "cliente.hpp"
#include <string>
#include <vector>

// class Cliente;

/**
 * @brief
 *@details
 */
class Livro {
  private:
	/**
	 * @brief
	 *
	 */
	int _idLivro;

	/**
	 * @brief
	 *
	 */
	std::string _nome;

	/**
	 * @brief
	 *
	 */
	std::string _autor;

	/**
	 * @brief
	 *
	 */
	std::string _edicao;

	/**
	 * @brief
	 *
	 */
	std::string _assunto;

	/**
	 * @brief
	 *
	 */
	int _idEstante;

	/**
	 * @brief
	 *
	 */
	int _idPrateleira;

	/**
	 * @brief
	 *
	 */
	int _quantidade;
	// std::vector<Cliente> _reservas;

  public:
	/**
	 * @brief Construct a new Livro object
	 *
	 */
	Livro();

	/**
	 * @brief Construct a new Livro object
	 *
	 * @param nome
	 * @param autor
	 * @param edicao
	 * @param assunto
	 */
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto);

	/**
	 * @brief Construct a new Livro object
	 *
	 * @param nome
	 * @param autor
	 * @param edicao
	 * @param assunto
	 * @param qtde
	 * @param idEstante
	 * @param idPrateleira
	 */
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto, int qtde, int idEstante, int idPrateleira);

	/**
	 * @brief Get the Id Livro object
	 *
	 * @return int
	 */
	int getIdLivro();

	/**
	 * @brief Get the Nome Livro object
	 *
	 * @return std::string
	 */
	std::string getNomeLivro();

	/**
	 * @brief Get the Autor Livro object
	 *
	 * @return std::string
	 */
	std::string getAutorLivro();

	/**
	 * @brief Get the Assunto Livro object
	 *
	 * @return std::string
	 */
	std::string getAssuntoLivro();

	/**
	 * @brief Get the Edicao Livro object
	 *
	 * @return std::string
	 */
	std::string getEdicaoLivro();

	/**
	 * @brief Get the Prateleira Livro object
	 *
	 * @return * int
	 */
	int getPrateleiraLivro();

	/**
	 * @brief Get the Estante Livro object
	 *
	 * @return int
	 */
	int getEstanteLivro();

	/**
	 * @brief Get the Qtde Livro object
	 *
	 * @return int
	 */
	int getQtdeLivro();
	// std::vector<Cliente> getReservasLivro();

	/**
	 * @brief Set the Id Livro object
	 *
	 * @param id
	 */
	void setIdLivro(int id);

	/**
	 * @brief Set the Nome Livro object
	 *
	 * @param nome
	 */
	void setNomeLivro(std::string nome);

	/**
	 * @brief Set the Autor Livro object
	 *
	 * @param autor
	 */
	void setAutorLivro(std::string autor);

	/**
	 * @brief Set the Edicao Livro object
	 *
	 * @param edicao
	 */
	void setEdicaoLivro(int edicao);

	/**
	 * @brief Set the Assunto Livro object
	 *
	 * @param assunto
	 */
	void setAssuntoLivro(std::string assunto);

	/**
	 * @brief Set the Id Estante Livro object
	 *
	 * @param idEstante
	 */
	void setIdEstanteLivro(int idEstante);

	/**
	 * @brief Set the Id Prateleira Livro object
	 *
	 * @param idPrateleira
	 */
	void setIdPrateleiraLivro(int idPrateleira);

	/**
	 * @brief Set the Qtde Livro object
	 *
	 * @param quantidade
	 */
	void setQtdeLivro(int quantidade);
};

#endif
