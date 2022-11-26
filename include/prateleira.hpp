#ifndef PRATELEIRA_H
#define PRATELEIRA_H

#include "livro.hpp"
#include <list>
#include <string>

/**
 * @brief
 *@details description
 */
class Prateleira {
  private:
	/**
	 * @brief
	 *
	 */
	int _idPrateleira;

	/**
	 * @brief
	 *
	 */
	std::string _assunto;

	/**
	 * @brief
	 *
	 */
	int _estanteId;

	/**
	 * @brief
	 *
	 */
	std::list<Livro> livrosDaPrateleira;

  public:
	/**
	 * @brief Construct a new Prateleira object
	 *
	 */
	Prateleira();

	/**
	 * @brief Construct a new Prateleira object
	 *
	 * @param assunto
	 * @param estanteID
	 */
	Prateleira(std::string assunto, int estanteID);

	/**
	 * @brief Get the Id Prateleira object
	 *
	 * @return int
	 */
	int getIdPrateleira();

	/**
	 * @brief Get the Assunto Prateleira object
	 *
	 * @return std::string
	 */
	std::string getAssuntoPrateleira();

	/**
	 * @brief Get the Estante Da Prateleira object
	 *
	 * @return int
	 */
	int getEstanteDaPrateleira();

	/**
	 * @brief Get the Livro Prateleira object
	 *
	 * @return std::list<Livro>
	 */
	std::list<Livro> getLivroPrateleira();

	/**
	 * @brief Set the Id Prateleira object
	 *
	 * @param id
	 */
	void setIdPrateleira(int id);

	/**
	 * @brief Set the Assunto Prateleira object
	 *
	 * @param _assunto
	 */
	void setAssuntoPrateleira(std::string _assunto);

	/**
	 * @brief Set the Estante Da Prateleira object
	 *
	 * @param idEstante
	 */
	void setEstanteDaPrateleira(int idEstante);

	/**
	 * @brief Set the Lista De Livros object
	 *
	 * @param listaDeLivros
	 */
	void setListaDeLivros(std::list<Livro> listaDeLivros);
};

#endif