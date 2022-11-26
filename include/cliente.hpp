#ifndef CLIENTE_H
#define CLIENTE_H

#include "livro.hpp"
#include "usuarios.hpp"
#include <iostream>
#include <list>

/**
 * @brief Armazena as caracteristicas do Cliente
 *
 * @details O Bibliotecario é o "usuário comum" do sistema.
 * Ele pode realizar as pesquisas no sistema, como buscar um livro pelo nome ou autor,
 * fazer reservas de livros e administar suas multas por atraso.
 */
class Cliente : public Usuario {
  private:
	/**
	 * @brief Atributo com a lista dos livros emprestados do Cliente
	 *
	 */
	std::list<Livro *> _livrosEmprestados;

	/**
	 * @brief Valor da multa do Cliente
	 *
	 */
	double _multa;

  public:
	/**
	 * @brief Constrói um novo objeto Cliente sem inicializar nenhum atributo
	 *
	 */
	Cliente();

	/**
	 * @brief Constrói um novo objeto Cliente recebendo um Usuario como parâmetro
	 *
	 * @param usuario
	 */
	Cliente(Usuario *usuario);

	/**
	 * @brief Constrói um novo objeto Cliente recebendo o id, tipoDeUsuario, nome, senha, email e telefone.
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
	 * @brief Constrói um novo objeto Bibliotecario recebendo o nome, senha, email e telefone.
	 *
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Cliente(std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Constrói um novo objeto Bibliotecario recebendo o nome, email e telefone.
	 *
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Cliente(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief Faz a reserva de um livro
	 *
	 * @param livro
	 */
	void reservarLivro(Livro *livro);

	/**
	 * @brief Renova a reserva de um livro
	 *
	 * @param livro
	 */
	void renovarReservar(Livro *livro);

	/**
	 * @brief Realiza o pagamento da multa do Cliente
	 *
	 * @param multa
	 */
	void pagarMulta(double multa);

	/**
	 * @brief Pesquisa se um livro está reservado
	 *
	 * @param livro
	 * @return std::list<Cliente>
	 */
	std::list<Cliente> pesquisarReserva(Livro livro);

	/**
	 * @brief Retorna o ID do Cliente
	 *
	 * @return int
	 */
	int getIdCliente();

	/**
	 * @brief Retorna a lista de livros emprestados do Cliente
	 *
	 * @return std::list<Livro *>
	 */
	std::list<Livro *> getLivrosEmprestados();

	/**
	 * @brief Retorna o valor da multa do Cliente
	 *
	 * @return double
	 */
	double getMulta();

	/**
	 * @brief Atualiza o tipo de usuario do Cliente
	 *
	 * @param tipoUsuario
	 */
	void setTipoUsuario(bool tipoUsuario);

	/**
	 * @brief Atualiza o valor da multa do Cliente
	 *
	 * @param multa
	 */
	void setMulta(double multa);

	/**
	 * @brief Reescrita do método exibeMenu() do Usuario para exibir o menu do Cliente.
	 * 			Retorna qual opção do menu foi selecionada.
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