#ifndef CLIENTE_H
#define CLIENTE_H

#include "livro.hpp"
#include "usuarios.hpp"
#include <iostream>
#include <list>

/**
 * @brief
 * @details
 */
class Cliente : public Usuario {
  private:
	/**
	 * @brief
	 *
	 */
	std::list<Livro *> _livrosEmprestados;

	/**
	 * @brief
	 *
	 */
	double _multa;

  public:
	/**
	 * @brief Construct a new Cliente object
	 *
	 */
	Cliente();

	/**
	 * @brief Construct a new Cliente object
	 *
	 * @param usuario
	 */
	Cliente(Usuario *usuario);

	/**
	 * @brief Construct a new Cliente object
	 *
	 * @param id
	 * @param tipoDeUsuario
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Cliente(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Construct a new Cliente object
	 *
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Cliente(std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Construct a new Cliente object
	 *
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Cliente(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief
	 *
	 * @param livro
	 */
	void reservarLivro(Livro *livro);

	/**
	 * @brief
	 *
	 * @param livro
	 */
	void renovarReservar(Livro *livro);

	/**
	 * @brief
	 *
	 * @param multa
	 */
	void pagarMulta(double multa);

	/**
	 * @brief
	 *
	 * @param livro
	 * @return std::list<Cliente>
	 */
	std::list<Cliente> pesquisarReserva(Livro livro);

	/**
	 * @brief Get the Id Cliente object
	 *
	 * @return int
	 */
	int getIdCliente();

	/**
	 * @brief Get the Livros Emprestados object
	 *
	 * @return std::list<Livro *>
	 */
	std::list<Livro *> getLivrosEmprestados();

	/**
	 * @brief Get the Multa object
	 *
	 * @return double
	 */
	double getMulta();

	/**
	 * @brief Set the Tipo Usuario object
	 *
	 * @param tipoUsuario
	 */
	void setTipoUsuario(bool tipoUsuario);

	/**
	 * @brief Set the Multa object
	 *
	 * @param multa
	 */
	void setMulta(double multa);

	/**
	 * @brief
	 *
	 * @return int
	 */
	virtual int exibeMenu() const override;

	/**
	 * @brief Destroy the Cliente object
	 *
	 */
	virtual ~Cliente() = default;
};

#endif