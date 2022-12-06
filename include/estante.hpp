#ifndef ESTANTE_H
#define ESTANTE_H

#include "prateleira.hpp"
#include <list>
#include <string>

/**
 * @file estante.hpp
 * @author João 
 * @brief  Armazena os atributos e métodos da classe Estante
 * @version 1.0
 * @date 05-12-2022
 * @details Atributos e cabeçalhos das funções da Classe Estante
 * @copyright GNU General Public License v2.0.
 */


/**
 * @brief Classe Estante
 *
 *@details Atributos e cabeçalhos das funções da Classe Estante
 */
class Estante {
  private:
	/**
	 * @brief Atributo com o ID da estante
	 * @details Identificação única de cada estante
	 */
	int _idEstante;

	/**
	 * @brief Atributo com a categoria da estante
	 * @details Categoria da estante que é organizada por categoria
	 */
	std::string _categoria;

	/**
	 * @brief Atributo com a lista de Prateleiras da estante
	 * @details List contendo Prateleiras
	 */
	std::list<Prateleira> _prateleiras;

  public:
	/**
	 * @brief Contrutor da classe Estante
	 *@details Constrói um novo objeto Estante sem inicializar nenhum atributo
	 */
	Estante();

	/**
	 * @brief Contrutor da classe Estante
	 *@details Constrói um novo objeto Estante recebedo a categoria como parâmetro.
	 * @param categoria
	 */
	Estante(std::string categoria);

	/**
	 * @brief Retorna o ID da estante
	 *@details Retorna a identificação única da estante
	 * @return int
	 */
	int getIdEstante();

	/**
	 * @brief Retorna a categoria da Estante
	 *@details Retorna sobre qual categoria a Estante é composta
	 * @return std::string
	 */
	std::string getCategoria();

	/**
	 * @brief Retorna a lista de prateleiras da Estante
	 *@details Retorna um list contendo Prateleiras
	 * @return std::list<Prateleira>
	 */
	std::list<Prateleira> getPrateleiras();

	/**
	 * @brief Atualiza o ID da Estante
	 *@details Set do ID de uma instanciação de Estante
	 * @param id
	 */
	void setIdEstante(int id);

	/**
	 * @brief Atualiza a categoria da Estante
	 *@details Set da categoria de uma instanciação de Estante
	 * @param categoria
	 */
	void setCategoria(std::string categoria);

	/**
	 * @brief Atualiza a lista de prateleiras da Estante
	 *@details Set da list contendo Prateleiras
	 * @param listaPrateleiras
	 */
	void setPrateleiras(std::list<Prateleira> listaPrateleiras);
};

#endif