#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "cliente.hpp"
#include "estante.hpp"
#include "livro.hpp"
#include "prateleira.hpp"
#include "usuarios.hpp"
#include <list>

/**
 * @brief Armazena as caracteristicas do Bibliotecário
 *
 * @details O Bibliotecario é o administrador do sistema.
 * Ele pode realizar todas as pesquisas que Cliente faz,
 * porém, o Bibliotecário pode cadastrar itens no sistema,
 * como por exemplo, livros e outros Clientes.
 */
class Bibliotecario : public Usuario {
  public:
	/**
	 * @brief Construct a new Bibliotecario object
	 *
	 */
	Bibliotecario();

	/**
	 * @brief Construct a new Bibliotecario object
	 *
	 * @param usuario
	 */
	Bibliotecario(Usuario *usuario);

	/**
	 * @brief Construct a new Bibliotecario object
	 *
	 * @param id
	 * @param tipoDeUsuario
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Construct a new Bibliotecario object
	 *
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Construct a new Bibliotecario object
	 *
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(std::string nome, std::string email, std::string telefone);

	///

	/**
	 * @brief
	 *
	 * @param cliente
	 * @param livro
	 */
	void emprestarLivro(Cliente *cliente, Livro *livro);

	/**
	 * @brief
	 *
	 * @param b
	 */
	void cadastrarLivro(Bibliotecario *b);

	/**
	 * @brief
	 *
	 * @param b
	 */
	void cadastrarPrateleira(Bibliotecario *b);

	/**
	 * @brief
	 *
	 */
	void cadastrarEstante();

	/**
	 * @brief
	 *
	 */
	void cadastrarCliente();

	/**
	 * @brief
	 *
	 * @param livro
	 * @return std::list<Cliente>
	 */
	std::list<Cliente> pesquisarReserva(Livro livro);

	/**
	 * @brief
	 *
	 * @param categoria
	 * @return int
	 */
	int buscaEstanteIDnobanco(std::string categoria);

	/**
	 * @brief
	 *
	 * @param assunto
	 * @return Prateleira
	 */
	Prateleira buscaPrateleiranobanco(std::string assunto);

	/**
	 * @brief
	 *
	 * @return int
	 */
	virtual int exibeMenu() const override;

	/**
	 * @brief Destroy the Bibliotecario object
	 *
	 */
	virtual ~Bibliotecario() = default;
};

#endif