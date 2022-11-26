#ifndef ESTANTE_H
#define ESTANTE_H

#include "prateleira.hpp"
#include <list>
#include <string>

/**
 * @brief Armazena os atributos da classe Estante
 *
 *@details Uma estante possui prateleira que, por sua vez, possuem livros. A estante também possui uma Categoria,
			como por exemplo, "Matemática", "Biologia", "Programação".
 */
class Estante {
  private:
	/**
	 * @brief Atributo com o ID da estante
	 *
	 */
	int _idEstante;

	/**
	 * @brief Atributo com a categoria da estante
	 *
	 */
	std::string _categoria;

	/**
	 * @brief Atributo com a lista de Prateleiras da estante
	 *
	 */
	std::list<Prateleira> _prateleiras;

  public:
	/**
	 * @brief Constrói um novo objeto Estante sem inicializar nenhum atributo
	 *
	 */
	Estante();

	/**
	 * @brief Constrói um novo objeto Estante recebedo a categoria como parâmetro.
	 *
	 * @param categoria
	 */
	Estante(std::string categoria);

	/**
	 * @brief Retorna o ID da estante
	 *
	 * @return int
	 */
	int getIdEstante();

	/**
	 * @brief Retorna a categoria da Estante
	 *
	 * @return std::string
	 */
	std::string getCategoria();

	/**
	 * @brief Retorna a lista de prateleiras da Estante
	 *
	 * @return std::list<Prateleira>
	 */
	std::list<Prateleira> getPrateleiras();

	/**
	 * @brief Atualiza o ID da Estante
	 *
	 * @param id
	 */
	void setIdEstante(int id);

	/**
	 * @brief Atualiza a categoria da Estante
	 *
	 * @param categoria
	 */
	void setCategoria(std::string categoria);

	/**
	 * @brief Atualiza a lista de prateleiras da Estante
	 *
	 * @param listaPrateleiras
	 */
	void setPrateleiras(std::list<Prateleira> listaPrateleiras);
};

#endif