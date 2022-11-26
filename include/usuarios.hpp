#ifndef USUARIOS_H
#define USUARIOS_H

#include "livro.hpp"
#include <list>
#include <string>

/**
 * @brief
 *@details description
 */
class Usuario {
  protected:
	/**
	 * @brief
	 *
	 */
	int _id;

	/**
	 * @brief
	 *
	 */
	bool _tipoDeUsuario;

	/**
	 * @brief
	 *
	 */
	std::string _nome;

	/**
	 * @brief
	 *
	 */
	std::string _senha;

	/**
	 * @brief
	 *
	 */
	std::string _email;

	/**
	 * @brief
	 *
	 */
	std::string _telefone;

  public:
	/**
	 * @brief Construct a new Usuario object
	 *
	 */
	Usuario();

	/**
	 * @brief Construct a new Usuario object
	 *
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Usuario(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief
	 *
	 * @param nomeLivroPesquisado
	 * @return Livro
	 */
	Livro pesquisarLivroPorNome(std::string nomeLivroPesquisado);

	/**
	 * @brief
	 *
	 * @param nomeAutorPesquisado
	 * @return std::list<Livro>
	 */
	std::list<Livro> pesquisarLivroPorAutor(std::string nomeAutorPesquisado);

	/**
	 * @brief
	 *
	 * @param assuntoPesquisado
	 * @return std::list<Livro>
	 */
	std::list<Livro> pesquisarLivroPorAssunto(std::string assuntoPesquisado);

	// void cadastrarCliente(Cliente cliente);

	// virtual std::list<Cliente> pesquisarReserva(Livro livroPesquisado) = 0;

	/**
	 * @brief Set the Id object
	 *
	 * @param id
	 */
	void setId(int id);

	/**
	 * @brief Set the Tipo Usuario object
	 *
	 * @param tipoUsuario
	 */
	void setTipoUsuario(bool tipoUsuario);

	/**
	 * @brief Set the Nome object
	 *
	 * @param nome
	 */
	void setNome(std::string nome);

	/**
	 * @brief Set the Senha object
	 *
	 * @param senha
	 */
	void setSenha(std::string senha);

	/**
	 * @brief Set the Email object
	 *
	 * @param email
	 */
	void setEmail(std::string email);

	/**
	 * @brief Set the Telefone object
	 *
	 * @param telefone
	 */
	void setTelefone(std::string telefone);

	/**
	 * @brief Get the Id object
	 *
	 * @return int
	 */
	int getId();

	/**
	 * @brief Get the Tipo Usuario object
	 *
	 * @return true
	 * @return false
	 */
	bool getTipoUsuario();

	/**
	 * @brief Get the Nome object
	 *
	 * @return std::string
	 */
	std::string getNome();

	/**
	 * @brief Get the Senha object
	 *
	 * @return std::string
	 */
	std::string getSenha();

	/**
	 * @brief Get the Email object
	 *
	 * @return std::string
	 */
	std::string getEmail();

	/**
	 * @brief Get the Telefone object
	 *
	 * @return std::string
	 */
	std::string getTelefone();

	/**
	 * @brief
	 *
	 * @return int
	 */
	virtual int exibeMenu() const;
};

#endif