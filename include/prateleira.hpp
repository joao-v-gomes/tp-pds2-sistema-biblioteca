#ifndef PRATELEIRA_H
#define PRATELEIRA_H

#include "livro.hpp"
#include <list>
#include <string>

/**
 * @brief Armazena as caracteristicas da Prateleira
 *@details A Prateleira é uma sub-divisão da estante. Uma estante pode conter várias prateleiras.
			Os livro, em uma mesma prateleira, tem o mesmo assunto.
 */
class Prateleira {
  private:
	/**
	 * @brief Atributo para identificar a prateleira no banco de dados
	 *
	 */
	int _idPrateleira;

	/**
	 * @brief Atributo com o assunto da prateleira
	 *
	 */
	std::string _assunto;

	/**
	 * @brief Atributo com ID da estante em que a prateleira está
	 *
	 */
	int _estanteId;

	/**
	 * @brief Lista com os livros contidos naquela prateleira
	 *
	 */
	std::list<Livro> livrosDaPrateleira;

  public:
	/**
	 * @brief Constrói um novo objeto Prateleira sem inicializar nenhum atributo
	 *
	 */
	Prateleira();

	/**
	 * @brief Constrói um novo objeto Prateleira recebendo como parâmetro o assunto e o Id da Estante
	 *
	 * @param assunto
	 * @param estanteID
	 */
	Prateleira(std::string assunto, int estanteID);

	/**
	 * @brief Retorna o ID da prateleira
	 *
	 * @return int
	 */
	int getIdPrateleira();

	/**
	 * @brief Retorna o assunto da prateleira
	 *
	 * @return std::string
	 */
	std::string getAssuntoPrateleira();

	/**
	 * @brief Retorna o ID da estante da prateleira
	 *
	 * @return int
	 */
	int getEstanteDaPrateleira();

	/**
	 * @brief Retorna o lista com os livros da prateleira
	 *
	 * @return std::list<Livro>
	 */
	std::list<Livro> getLivroPrateleira();

	/**
	 * @brief Atualiza o id da prateleira
	 *
	 * @param id
	 */
	void setIdPrateleira(int id);

	/**
	 * @brief Atualiza o assunto da prateleira
	 *
	 * @param _assunto
	 */
	void setAssuntoPrateleira(std::string _assunto);

	/**
	 * @brief Atualiza a id da estante da prateleira
	 *
	 * @param idEstante
	 */
	void setEstanteDaPrateleira(int idEstante);

	/**
	 * @brief Atualiza a lista de livros da prateleira
	 *
	 * @param listaDeLivros
	 */
	void setListaDeLivros(std::list<Livro> listaDeLivros);
};

#endif