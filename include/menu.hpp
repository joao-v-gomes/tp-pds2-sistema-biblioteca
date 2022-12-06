#ifndef MENU_H
#define MENU_H

#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "definitions.hpp"
#include <iostream>
#include <string>

/**
 * @file menu.hpp
 * @author João 
 * @brief  Arquivo que inicializa o login no sistema.
 * @version 1.0
 * @date 05-12-2022
 * @details Arquivo responsável pela inicialização de um usuário, seja Cliente ou Bibliotecário.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Inicializa o login no sistema
 * @details Recebe um ponteiro para um Usuario que, após o login, é inicializado como Cliente ou Bibliotecário.
 *          Retorna se o login foi de um Cliente ou Usuário.
 * @param user
 * @return int
 */
int menuLogin(Usuario *user);

/**
 * @brief Verifica e inicializa as informações do usuário em questão,
 * @details Verifica as informações de login no banco de dados e
 *          inicializa as informações do usuário que fez login.
 *          Retorna se o login foi bem sucedido ou não.
 * @param user
 * @param usuario
 * @param senha
 * @return int
 */
int verificarLogin(Usuario *user, std::string usuario, std::string senha);

#endif