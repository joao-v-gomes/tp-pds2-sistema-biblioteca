#ifndef LIVRO_H
#define LIVRO_H


#include <string>
#include <vector>

/**
 * @file livro.hpp
 * @author João 
 * @brief Armazena as caracteristicas do livro
 * @version 1.0
 * @date 05-12-2022
 *@details O Livro é o objeto que será manipulado pelos Usuários.
			Ele possui alguns atrinutos para a identificação do livro e
			outros para a localização do livro na biblioteca.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe Livro,
 * @details Atributos e métodos de Livro.
 */
class Livro {
  private:
	/**
	 * @brief Identifica livro,
	 * @details Atributo para identificar o livro no banco de dados.
	 */
	int _idLivro;

	/**
	 * @brief Nome do livro,
	 * @details Atributo com o nome do livro.
	 */
	std::string _nome;

	/**
	 * @brief Autor do livro,
	 * @details Atributo com o autor do livro.
	 */
	std::string _autor;

	/**
	 * @brief Edição do Livro,
	 * @details Atributo com a edição do livro.
	 */
	std::string _edicao;

	/**
	 * @brief Assunto do Livro,
	 * @details Atributo com o assunto do livro.
	 */
	std::string _assunto;

	/**
	 * @brief Número da estante que contém o Livro,
	 * @details Atributo com o número da estante em que o livro está alocado.
	 */
	int _idEstante;

	/**
	 * @brief Número da prateleira que contém o Livro,
	 * @details Atributo com o número da prateleira em que o livro está alocado.
	 */
	int _idPrateleira;

	/**
	 * @brief Quantidade de livros no estoque,
	 * @details Atributo com a quantidade de livros em estoque.
	 */
	int _quantidade;

  public:
	/**
	 * @brief Construtor de Livro,
	 * @details Constrói um novo objeto Livro sem inicializar nenhum atributo.
	 */
	Livro();

	/**
	 * @brief Construtor de Livro,
	 * @details Constrói um novo objeto Livro recebendo como parâmetro o nome, autor, edição e assunto.
	 * @param nome
	 * @param autor
	 * @param edicao
	 * @param assunto
	 */
	Livro(std::string nome, std::string autor, std::string edicao, std::string assunto);

	/**
	 * @brief Construtor de Livro,
	 * @details Constrói um novo objeto Livro recebendo como parâmetro o nome, autor, edicao, assunto, quantidade, idEstante e idPrateleira.
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
	 * @brief Retorna a ID do livro,
	 * @details Função que retorna a identificação do respectivo livro.
	 * @return int
	 */
	int getIdLivro();

	/**
	 * @brief Retorna o nome do livro,
	 * @details Função que retorna o nome do respectivo livro.
	 * @return std::string
	 */
	std::string getNomeLivro();

	/**
	 * @brief Retorna o autor do livro,
	 * @details Função que retorna o autor do respectivo livro.
	 * @return std::string
	 */
	std::string getAutorLivro();

	/**
	 * @brief Retorna o assunto do livro,
	 * @details Função que retorna o assunto do respectivo livro.
	 * @return std::string
	 */
	std::string getAssuntoLivro();

	/**
	 * @brief Retorna a edição do livro,
	 * @details Função que retorna a edição do respectivo livro.
	 * @return std::string
	 */
	std::string getEdicaoLivro();

	/**
	 * @brief Retorna o ID da prateleira do livro,
	 * @details Função que retorna a identificação da prateleira do respectivo livro.
	 * @return int
	 */
	int getPrateleiraLivro();

	/**
	 * @brief Retorna o ID da estante do livro,
	 * @details Função que retorna a identificação da estante onde o livro foi alocado.
	 * @return int
	 */
	int getEstanteLivro();

	/**
	 * @brief Retorna a quantidade daquele livro,
	 * @details Função que retorna quantos livros iguais a biblioteca possui.
	 * @return int
	 */
	int getQtdeLivro();

	/**
	 * @brief Atualiza o ID do livro,
	 * @details Função que atualiza o ID do respectivo livro.
	 * @param id
	 */
	void setIdLivro(int id);

	/**
	 * @brief Atualiza o nome do livro,
	 * @details Função responsável pela atualização do nome do livro em questão.
	 * @param nome
	 */
	void setNomeLivro(std::string nome);

	/**
	 * @brief Atualiza o autor do livro,
	 * @details Função que atualiza o autor do respectivo livro.
	 * @param autor
	 */
	void setAutorLivro(std::string autor);

	/**
	 * @brief Atualiza a edição do livro,
	 * @details Função que atualiza a edição do respectivo livro.
	 * @param edicao
	 */
	void setEdicaoLivro(int edicao);

	/**
	 * @brief Atualiza o assunto do livro,
	 * @details Função que atualiza o assunto do respectivo livro.
	 * @param assunto
	 */
	void setAssuntoLivro(std::string assunto);

	/**
	 * @brief Atualiza o ID da estante do livro,
	 * @details Função que atualiza a identificação da estante do livro.
	 * @param idEstante
	 */
	void setIdEstanteLivro(int idEstante);

	/**
	 * @brief Atualiza o ID da prateleira do livro
	 * @details Função que atualiza a identificação da prateleira de onde o livro está.
	 * @param idPrateleira
	 */
	void setIdPrateleiraLivro(int idPrateleira);

	/**
	 * @brief Atualiza a quantidade de livros
	 * @details Função responsável por atualizar a quantidade de determinado livro.
	 * @param quantidade
	 */
	void setQtdeLivro(int quantidade);
};

#endif
