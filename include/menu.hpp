#ifndef MENU_H
#define MENU_H

#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "definitions.hpp"
#include <iostream>
#include <string>

/**
 * @brief
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
 * @brief
 *
 * @param user
 * @param usuario
 * @param senha
 * @return int
 */
int verificarLogin(Usuario *user, std::string usuario, std::string senha);

#endif