#ifndef USUARIOS_H
#define USUARIOS_H

#include "livro.hpp"
#include <list>
#include <string>

/**
 * @file usuarios.hpp
 * @author João 
 * @brief Armazena as caracteristicas do Usuário
 * @version 1.0
 * @date 05-12-2022
 * @details Um Usuário pode ser do tipo Cliente ou Bibliotecário.
			As funções de alimentação do sistema são exclusivas do Bibliotecário,
			mas funções de pesquisa são compartilhadas.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe Usuario,
 * @details Atributos e métodos de Usuario.
 */
class Usuario {
  protected:
	/**
	 * @brief ID Usuário,
	 * @details Atributo com o ID do Usuário.
	 */
	int _id;

	/**
	 * @brief Tipo de Usuário,
	 * @details Atributo com o tipo de Usuário.
	 */
	bool _tipoDeUsuario;

	/**
	 * @brief Nome do Usuário,
	 * @details Atributo com o nome do Usuário.
	 */
	std::string _nome;

	/**
	 * @brief Senha do Usuário,
	 * @details Atributo com a senha do Usuário.
	 */
	std::string _senha;

	/**
	 * @brief Email do Usuário,
	 * @details Atributo com o email do Usuário.
	 */
	std::string _email;

	/**
	 * @brief Telefone do Usuário,
	 * @details Atributo com o telefone do Usuário.
	 */
	std::string _telefone;

  public:
	/**
	 * @brief Construtor de Usuario,
	 * @details Constrói um novo objeto Usuario sem inicializar nenhum atributo.
	 */
	Usuario();

	/**
	 * @brief Construtor de Usuario,
	 * @details Constrói um novo objeto Usuario recebendo como parâmetro o nome, senha, email e telefone.
	 * @param nome
	 * @param email
	 * @param telefone
	 */
	Usuario(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief Busca livro pelo nome,
	 * @details Pesquisa um livro pelo nome e retorna um objeto Livro.
	 * @param nomeLivroPesquisado
	 * @return Livro
	 */
	Livro pesquisarLivroPorNome(std::string nomeLivroPesquisado);

	/**
	 * @brief Pesquisa livro pelo autor,
	 * @details Pesquisa um livro por autor e retorna uma lista de Livros.
	 * @param nomeAutorPesquisado
	 * @return std::list<Livro>
	 */
	std::list<Livro> pesquisarLivroPorAutor(std::string nomeAutorPesquisado);

	/**
	 * @brief Pesquisa livro por assunto,
	 * @details Pesquisa um livro por assunto e retorna uma lista de Livros.
	 * @param assuntoPesquisado
	 * @return std::list<Livro>
	 */
	std::list<Livro> pesquisarLivroPorAssunto(std::string assuntoPesquisado);

	/**
	 * @brief Atualiza o ID do Usuario,
	 * @details Função responsável pela atualização do ID do Usuário.
	 * @param id
	 */
	void setId(int id);

	/**
	 * @brief Atualiza o tipo de usuario,
	 * @details Função responsável por atualizar o tipo do Usuário, sela Cliente ou Bibliotecário.
	 * @param tipoUsuario
	 */
	void setTipoUsuario(bool tipoUsuario);

	/**
	 * @brief Atualiza o nome do Usuario,
	 * @details Função responsável pela atualização do nome do Usuario.
	 * @param nome
	 */
	void setNome(std::string nome);

	/**
	 * @brief Atualiza a senha do Usuario,
	 * @details Função responsável pela atualização da senha do respectivo Usuario.
	 * @param senha
	 */
	void setSenha(std::string senha);

	/**
	 * @brief Atualiza o email do Usuario,
	 * @details Função responsável pela atualização do email do respectivo Usuario.
	 * @param email
	 */
	void setEmail(std::string email);

	/**
	 * @brief Atualiza o telefone do Usuario,
	 * @details Função responsável pela atualização do email do respectivo Usuario.
	 * @param telefone
	 */
	void setTelefone(std::string telefone);

	/**
	 * @brief Retorna o ID do Usuario,
	 * @details Função que retorna a identificação do Usuario em questão.
	 * @return int
	 */
	int getId();

	/**
	 * @brief Função que retorna o tipo de Usuario,
	 * @details Retorna o tipo de Usuario
	 * 			True -> Cliente
	 * 			False -> Bibliotecario
	 * @return true
	 * @return false
	 */
	bool getTipoUsuario();

	/**
	 * @brief Retorna o nome do Usuario,
	 * @details Função que retorna o nome do respectivo Usuario.
	 * @return std::string
	 */
	std::string getNome();

	/**
	 * @brief Retorna a senha do Usuario,
	 * @details Função que retorna a senha do respectivo Usuario.
	 * @return std::string
	 */
	std::string getSenha();

	/**
	 * @brief Retorna o email do usuario,
	 * @details Função que retorna o email do respectivo Usuario.
	 * @return std::string
	 */
	std::string getEmail();

	/**
	 * @brief Retorna o telefone do usuario,
	 * @details Função que retorna o telefone do respectivo Usuario.
	 * @return std::string
	 */
	std::string getTelefone();

	/**
	 * @brief Função que exibe o menu,
	 * @details  Exibe o menu do usuario.
	 * 			Cada tipo de Usuário deve reescrever o seu próprio exibeMenu específico.
	 * @return int
	 */
	virtual int exibeMenu() const;
};

#endif
