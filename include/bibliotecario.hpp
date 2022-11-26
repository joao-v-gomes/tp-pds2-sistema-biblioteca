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
	 * @brief Constrói um novo objeto Bibliotecario sem inicializar nenhum atributo
	 *
	 */
	Bibliotecario();

	/**
	 * @brief Constrói um novo objeto Bibliotecario recebendo um objeto Usuario como parametro
	 *
	 * @param usuario
	 */
	Bibliotecario(Usuario *usuario);

	/**
	 * @brief Constrói um novo objeto Bibliotecario recebendo o id, tipoDeUsuario, nome, senha, email e telefone.
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
	 * @brief Constrói um novo objeto Bibliotecario recebendo o nome, senha, email e telefone.
	 *
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone);

	/**
	 * @brief Constrói um novo objeto Bibliotecario recebendo o nome, email e telefone.
	 *
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(std::string nome, std::string email, std::string telefone);

	///

	/**
	 * @brief Realiza as ações necessárias para emprestar um livro para um Cliente.
	 *
	 * @param cliente
	 * @param livro
	 */
	void emprestarLivro(Cliente *cliente, Livro *livro);

	/**
	 * @brief Cadastra um novo livro no banco de dados. Recebe como parâmetro o Bibliotecário que fará o cadastro.
	 *
	 * @param b
	 */
	void cadastrarLivro(Bibliotecario *b);

	/**
	 * @brief Cadastra uma nova prateleira no banco de dados. Recebe como parâmetro o Bibliotecário que fará o cadastro.
	 *
	 * @param b
	 */
	void cadastrarPrateleira(Bibliotecario *b);

	/**
	 * @brief Cadastra uma nova estante no banco de dados.
	 *
	 */
	void cadastrarEstante();

	/**
	 * @brief Cadastra um novo cliente no banco de dados.
	 *
	 */
	void cadastrarCliente();

	/**
	 * @brief Realiza a pesquisa no banco de dados sobre as reservas de um determinado livro e retorna a lista uma lista de clientes
	 *@details A lista de reserva funciona como uma fila, o primeiro cliente é, de fato, com quem está o livro.
				O segundo cliente pegará o livro assim que o primeiro devolver o livro para a biblioteca.
	 * @param livro
	 * @return std::list<Cliente>
	 */
	std::list<Cliente> pesquisarReserva(Livro livro);

	/**
	 * @brief Busca, no banco de dados, o ID da estante que possui a categoria recebida como parâmetro.
	 *
	 * @param categoria
	 * @return int
	 */
	int buscaEstanteIDnobanco(std::string categoria);

	/**
	 * @brief Busca, no banco de dados, um objeto Prateleira que possui o assunto recebida como parâmetro.
	 *
	 * @param assunto
	 * @return Prateleira
	 */
	Prateleira buscaPrateleiranobanco(std::string assunto);

	/**
	 * @brief Reescrita do método exibeMenu() do Usuario para exibir o menu do Bibliotecário.
	 * 			Retorna qual opção do menu foi selecionada.
	 *
	 * @return int
	 */
	virtual int exibeMenu() const override;

	/**
	 * @brief Destrói o objeto Bibliotecário
	 *
	 */
	virtual ~Bibliotecario() = default;
};

#endif