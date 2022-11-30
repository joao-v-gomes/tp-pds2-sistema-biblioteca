#ifndef LIVRO_H
#define LIVRO_H

// #include "cliente.hpp"
#include <string>
#include <vector>

// class Cliente;

/**
 * @brief Armazena as caracteristicas do Livro
 *@details O Livro é o objeto que será manipulado pelos Usuários.
			Ele possui alguns atrinutos para a identificação do livro e
			outros para a localização do livro na biblioteca.
 */
class Livro {
  private:
	/**
	 * @brief Atributo para identificar o livro no banco de dados
	 *
	 */
	int _idLivro;

	/**
	 * @brief Atributo com o nome do livro
	 *
	 */
	std::string _nome;

	/**
	 * @brief Atributo com o autor do livro
	 *
	 */
	std::string _autor;

	/**
	 * @brief Atributo com a edicao do livro
	 *
	 */
	std::string _edicao;

	/**
	 * @brief Atributo com o assunto do livro
	 *
	 */
	std::string _assunto;

	/**
	 * @brief Atributo com o número da estante em que o livro está alocado
	 *
	 */
	int _idEstante;

	/**
	 * @brief Atributo com o número da prateleira em que o livro está alocado
	 *
	 */
	int _idPrateleira;

	/**
	 * @brief Atributo com a quantidade de livros em estoque
	 *
	 */
	int _quantidade;

	// std::vector<Cliente> _reservas;

  public:
	/**
	 * @brief Constrói um novo objeto Livro sem inicializar nenhum atributo
	 *
	 */
	Livro();

	/**
	 * @brief Constrói um novo objeto Livro recebendo como parâmetro o nome, autor, edicao e assunto
	 *
	 * @param nome
	 * @param autor
	 * @param edicao
	 * @param assunto
	 */
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto);

	/**
	 * @brief Constrói um novo objeto Livro recebendo como parâmetro o nome, autor, edicao, assunto, qtde, idEstante e idPrateleira
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
	 * @brief Retorna a ID do livro
	 *
	 * @return int
	 */
	int getIdLivro();

	/**
	 * @brief Retorna o nome do livro
	 *
	 * @return std::string
	 */
	std::string getNomeLivro();

	/**
	 * @brief Retorna o autor do livro
	 *
	 * @return std::string
	 */
	std::string getAutorLivro();

	/**
	 * @brief Retorna o assunto do livro
	 *
	 * @return std::string
	 */
	std::string getAssuntoLivro();

	/**
	 * @brief Retorna a edição do livro
	 *
	 * @return std::string
	 */
	std::string getEdicaoLivro();

	/**
	 * @brief Retorna o ID da prateleira do livro
	 *
	 * @return int
	 */
	int getPrateleiraLivro();

	/**
	 * @brief Retorna o ID da estante do livro
	 *
	 * @return int
	 */
	int getEstanteLivro();

	/**
	 * @brief Retorna a quantidade daquele livro
	 *
	 * @return int
	 */
	int getQtdeLivro();

	// std::vector<Cliente> getReservasLivro();

	/**
	 * @brief Atualiza o ID do livro
	 *
	 * @param id
	 */
	void setIdLivro(int id);

	/**
	 * @brief Atualiza o nome do livro
	 *
	 * @param nome
	 */
	void setNomeLivro(std::string nome);

	/**
	 * @brief Atualiza o autor do livro
	 *
	 * @param autor
	 */
	void setAutorLivro(std::string autor);

	/**
	 * @brief Atualiza a edição do livro
	 *
	 * @param edicao
	 */
	void setEdicaoLivro(int edicao);

	/**
	 * @brief Atualiza o assunto do livro
	 *
	 * @param assunto
	 */
	void setAssuntoLivro(std::string assunto);

	/**
	 * @brief Atualiza o ID da estante do livro
	 *
	 * @param idEstante
	 */
	void setIdEstanteLivro(int idEstante);

	/**
	 * @brief Atualiza o ID da prateleira do livro
	 *
	 * @param idPrateleira
	 */
	void setIdPrateleiraLivro(int idPrateleira);

	/**
	 * @brief Atualiza a quantidade de livros
	 *
	 * @param quantidade
	 */
	void setQtdeLivro(int quantidade);
};

#endif
