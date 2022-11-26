#ifndef ESTANTE_H
#define ESTANTE_H

#include "prateleira.hpp"
#include <list>
#include <string>

/**
 * @brief
 *@details
 */
class Estante {
  private:
	/**
	 * @brief
	 *
	 */
	int _idEstante;

	/**
	 * @brief
	 *
	 */
	std::string _categoria;

	/**
	 * @brief
	 *
	 */
	std::list<Prateleira> _prateleiras;

  public:
	/**
	 * @brief Construct a new Estante object
	 *
	 */
	Estante();

	/**
	 * @brief Construct a new Estante object
	 *
	 * @param categoria
	 */
	Estante(std::string categoria);

	/**
	 * @brief Get the Id Estante object
	 *
	 * @return int
	 */
	int getIdEstante();

	/**
	 * @brief Get the Categoria object
	 *
	 * @return std::string
	 */
	std::string getCategoria();

	/**
	 * @brief Get the Prateleiras object
	 *
	 * @return std::list<Prateleira>
	 */
	std::list<Prateleira> getPrateleiras();

	/**
	 * @brief Set the Id Estante object
	 *
	 * @param id
	 */
	void setIdEstante(int id);

	/**
	 * @brief Set the Categoria object
	 *
	 * @param categoria
	 */
	void setCategoria(std::string categoria);

	/**
	 * @brief Set the Prateleiras object
	 *
	 * @param listaPrateleiras
	 */
	void setPrateleiras(std::list<Prateleira> listaPrateleiras);
};

#endif