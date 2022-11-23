#ifndef MENU_H
#define MENU_H

#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "definitions.hpp"
#include <iostream>
#include <string>

int menuLogin(Usuario *user);
int menuCliente();
int menuBibliotecario();
void menuCadastrarCliente(Usuario *user);
int verificarLogin(Usuario *user, std::string usuario, std::string senha);

#endif