#ifndef MENU_H
#define MENU_H

#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "definitions.hpp"
#include <iostream>
#include <string>

/**
 * @brief Inicializa o login no sistema
 * @details Recebe um ponteiro para um Usuario que, após o login, é inicializado como Cliente ou Bibliotecário.
 *          Retorna se o login foi de um Cliente ou Usuário.
 *
 * @param user
 * @return int
 */
int menuLogin(Usuario *user);

// int menuCliente();
// int menuBibliotecario();
// void menuCadastrarCliente(Usuario *user);
// void menuCadastraLivro(Usuario *user);
// void menuCadastraEstante(Usuario *user);
// void menuCadastraPrateleira(Usuario *user);

/**
 * @brief Verifica as informações de login no banco de dados e
 *          inicializa as informações do usuário que fez login.
 *          Retorna de o login foi bem sucedido ou não.
 *
 * @param user
 * @param usuario
 * @param senha
 * @return int
 */
int verificarLogin(Usuario *user, std::string usuario, std::string senha);

#endif