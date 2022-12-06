#ifndef CLIENTE_H
#define CLIENTE_H

#include "livro.hpp"
#include "usuarios.hpp"
#include <iostream>
#include <list>

/**
 * @file cliente.hpp
 * @author João 
 * @brief Armazena as caracteristicas do Cliente
 * @version 1.0
 * @date 05-12-2022
 * @details O Cliente é o "usuário comum" do sistema.
 * Ele pode realizar as pesquisas no sistema, como buscar um livro pelo nome ou autor,
 * fazer reservas de livros e administar suas multas por atraso.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe Cliente,
 * @details Atributos e métodos do Cliente.
 */
class Cliente : public Usuario {
  private:
	/**
	 * @brief Atributo da classe Cliente,
	 * @details Atributo com a lista dos livros emprestados do Cliente.
	 */
	std::list<Livro *> _livrosEmprestados;

	/**
	 * @brief Atributo da classe Cliente,
	 * @details Atributo com o valor da multa do Cliente.
	 */
	double _multa;

  public:
	/**
	 * @brief Construtor da classe Cliente,
	 * @details Constrói um novo objeto Cliente sem inicializar nenhum atributo.
	 */
	Cliente();

	/**
	 * @brief Construtor da classe Cliente,
	 * @details Constrói um novo objeto Cliente recebendo um Usuario como parâmetro.
	 * @param usuario
	 */
	Cliente(Usuario *usuario);

	/**
	 * @brief Construtor da classe Cliente,
	 * @details Constrói um novo objeto Cliente recebendo o id, tipoDeUsuario, nome, senha, email e telefone.
	 * @param id
	 * @param tipoDeUsuario
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Cliente(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Construtor da classe Cliente,
	 * @details Constrói um novo objeto Bibliotecario recebendo o nome, senha, email e telefone.
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Cliente(std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Construtor da classe Cliente,
	 * @details Constrói um novo objeto Bibliotecario recebendo o nome, email e telefone.
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Cliente(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief Faz a reserva de um livro,
	 * @details Reserva um livro da lista de livros já existentes.
	 * @param livro
	 */
	void reservarLivro(Livro *livro);

	/**
	 * @brief Faz a renovação da reserva,
	 * @details Renova a reserva de um livro que já estava em posse de um cliente.
	 * @param livro
	 */
	void renovarReservar(Livro *livro);

	/**
	 * @brief Pagamento de multa,
	 * @details Realiza o pagamento da multa do Cliente.
	 * @param multa
	 */
	void pagarMulta(double multa);

	/**
	 * @brief Pesquisa disponibilidade de um livro,
	 * @details Pesquisa se um livro está em posse de algum cliente.
	 * @param livro
	 * @return std::list<Cliente>
	 */
	std::list<Cliente> pesquisarReserva(Livro livro);

	/**
	 * @brief Retorna o ID do Cliente,
	 * @details Retorna a identificação do Cliente em questão.
	 * @return int
	 */
	int getIdCliente();

	/**
	 * @brief Retorna os livros que estão emprestados,
	 * @details Retorna a lista de livros emprestados do Cliente.
	 * @return std::list<Livro *>
	 */
	std::list<Livro *> getLivrosEmprestados();

	/**
	 * @brief Retorna o Débito do Cliente,
	 * @details Retorna o valor da multa do Cliente.
	 * @return double
	 */
	double getMulta();

	/**
	 * @brief Atualiza uma instância de Cliente,
	 * @details Atualiza o tipo de usuário do Cliente,
	 * @param tipoUsuario
	 */
	void setTipoUsuario(bool tipoUsuario);

	/**
	 * @brief Set da multa do Cliente,
	 * @details Atualiza o valor da multa do Cliente.
	 * @param multa
	 */
	void setMulta(double multa);

	/**
	 * @brief Função que exibe o menu do Cliente.
	 * @details Reescrita do método exibeMenu() do Usuario para exibir o menu do Cliente.
	 * 			Retorna qual opção do menu foi selecionada.
	 * @return int
	 */
	virtual int exibeMenu() const override;

	/**
	 * @brief Destrói o objeto Cliente
	 * @details Destrói a classe Cliente instanciada.
	 */
	virtual ~Cliente() = default;
};

#endif