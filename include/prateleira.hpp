#ifndef PRATELEIRA_H
#define PRATELEIRA_H

#include "livro.hpp"
#include <list>
#include <string>

/**
 * @file prateleira.hpp
 * @author João 
 * @brief  Armazena os atributos e métodos da classe Prateleira
 * @version 1.0
 * @date 05-12-2022
 * @details Atributos e cabeçalhos das funções da Classe Prateleira
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe Prateleira
 *
 *@details Atributos e cabeçalhos das funções da Classe Prateleira
 */
class Prateleira {
  private:
	/**
	 * @brief ID da Pratelira
	 *@details Atributo para identificar a prateleira no banco de dados
	 */
	int _idPrateleira;

	/**
	 * @brief Atributo com o assunto da prateleira
	 *@details Atributo assunto pleo qual as prateleiras são organizadas
	 */
	std::string _assunto;

	/**
	 * @brief ID da estante
	 *@details Atributo com ID da estante em que a prateleira está
	 */
	int _estanteId;

	/**
	 * @brief List de Livros
	 *@details Lista com os livros contidos naquela prateleira
	 */
	std::list<Livro> livrosDaPrateleira;

  public:
	/**
	 * @brief Construtor de Prateleira
	 *@details Constrói um novo objeto Prateleira sem inicializar nenhum atributo
	 */
	Prateleira();

	/**
	 * @brief Construtor de Prateleira
	 *@details Constrói um novo objeto Prateleira recebendo como parâmetro o assunto e o Id da Estante
	 * @param assunto
	 * @param estanteID
	 */
	Prateleira(std::string assunto, int estanteID);

	/**
	 * @brief Retorna o ID da prateleira
	 *@details Retorna o identificador de uma prateleira
	 * @return int
	 */
	int getIdPrateleira();

	/**
	 * @brief Retorna o assunto da prateleira
	 *@details Retorna o assunto sobre o qual os livros da prateleira tratam
	 * @return std::string
	 */
	std::string getAssuntoPrateleira();

	/**
	 * @brief Retorna o ID da estante da prateleira
	 *@details Retorna o identificador da estante de uma prateleira
	 * @return int
	 */
	int getEstanteDaPrateleira();

	/**
	 * @brief Retorna o list de Livros
	 *@details Retorna o lista com os livros da prateleira
	 * @return std::list<Livro>
	 */
	std::list<Livro> getLivroPrateleira();

	/**
	 * @brief Set do id da prateleira
	 *@details Atualiza o id da prateleira
	 * @param id
	 */
	void setIdPrateleira(int id);

	/**
	 * @brief Set do assunto da prateleira
	 *@details Atualiza o assunto da prateleira
	 * @param _assunto
	 */
	void setAssuntoPrateleira(std::string _assunto);

	/**
	 * @brief Set do id da estante da prateleira
	 *@details Atualiza a id da estante da prateleira
	 * @param idEstante
	 */
	void setEstanteDaPrateleira(int idEstante);

	/**
	 * @brief Set da list de livros da prateleira
	 *@details Atualiza a lista de livros da prateleira
	 * @param listaDeLivros
	 */
	void setListaDeLivros(std::list<Livro> listaDeLivros);
};

#endif