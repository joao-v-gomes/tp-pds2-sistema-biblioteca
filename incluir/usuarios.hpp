#ifndef USUARIOS_H
#define USUARIOS_H

#include "livro.hpp"
#include <list>
#include <string>


/**
 * @brief Armazena as caracteristicas do Usuário
 *@details Um Usuário pode ser do tipo Cliente ou Bibliotecário.
			As funções de alimentação do sistema são exclusivas do Bibliotecário,
			mas funções de pesquisa são compartilhadas.
 */
class Usuario {
  protected:
	/**
	 * @brief Atributo com o id do Usuário
	 *
	 */
	int _id;

	/**
	 * @brief Atributo com o tipo de usuario
	 *
	 */
	bool _tipoDeUsuario;

	/**
	 * @brief Atributo com o nome do usuário
	 *
	 */
	std::string _nome;

	/**
	 * @brief Atributo com a senha do usuario
	 *
	 */
	std::string _senha;

	/**
	 * @brief Atributo com o email do Usuário
	 *
	 */
	std::string _email;

	/**
	 * @brief Atributo com o telefone do Usuário
	 *
	 */
	std::string _telefone;

  public:
	/**
	 * @brief Constrói um novo objeto Usuario sem inicializar nenhum atributo
	 *
	 */
	Usuario();

	/**
	 * @brief Constrói um novo objeto Usuario recebendo como parâmetro o nome, senha, email e telefone
	 *
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Usuario(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief Pesquisa um livro pelo nome e retorna um objeto Livro
	 *
	 * @param nomeLivroPesquisado
	 * @return Livro
	 */
	Livro pesquisarLivroPorNome(std::string nomeLivroPesquisado);

	/**
	 * @brief Pesquisa um livro por autor e retorna uma lista de Livros
	 *
	 * @param nomeAutorPesquisado
	 * @return std::list<Livro>
	 */
	std::list<Livro> pesquisarLivroPorAutor(std::string nomeAutorPesquisado);

	/**
	 * @brief Pesquisa um livro por assunto e retorna uma lista de Livros
	 *
	 * @param assuntoPesquisado
	 * @return std::list<Livro>
	 */
	std::list<Livro> pesquisarLivroPorAssunto(std::string assuntoPesquisado);

	// void cadastrarCliente(Cliente cliente);

	// virtual std::list<Cliente> pesquisarReserva(Livro livroPesquisado) = 0;

	/**
	 * @brief Atualiza o id do Usuario
	 *
	 * @param id
	 */
	void setId(int id);

	/**
	 * @brief Atualiza o tipo de usuario
	 *
	 * @param tipoUsuario
	 */
	void setTipoUsuario(bool tipoUsuario);

	/**
	 * @brief Atualiza o nome do usuario
	 *
	 * @param nome
	 */
	void setNome(std::string nome);

	/**
	 * @brief Atualiza a senha do usuario
	 *
	 * @param senha
	 */
	void setSenha(std::string senha);

	/**
	 * @brief Atualiza o email do usuario
	 *
	 * @param email
	 */
	void setEmail(std::string email);

	/**
	 * @brief Atualiza o telefone do usuario
	 *
	 * @param telefone
	 */
	void setTelefone(std::string telefone);

	/**
	 * @brief Retorna o ID do usuario
	 *
	 * @return int
	 */
	int getId();

	/**
	 * @brief Retorna o tipo de usuario
	 * 			True -> Cliente
	 * 			False -> Bibliotecario
	 *
	 * @return true
	 * @return false
	 */
	bool getTipoUsuario();

	/**
	 * @brief Retorna o nome do usuario
	 *
	 * @return std::string
	 */
	std::string getNome();

	/**
	 * @brief Retorna a senha do usuario
	 *
	 * @return std::string
	 */
	std::string getSenha();

	/**
	 * @brief Retorna o email do usuario
	 *
	 * @return std::string
	 */
	std::string getEmail();

	/**
	 * @brief Retorna o telefone do usuario
	 *
	 * @return std::string
	 */
	std::string getTelefone();

	/**
	 * @brief Exibe o menu do usuario.
	 * 			Cada tipo de Usuário deve reescrever o seu próprio exibeMenu específico.
	 *
	 * @return int
	 */
	virtual int exibeMenu() const;
};

#endif
