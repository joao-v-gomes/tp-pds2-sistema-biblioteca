#ifndef MENU_H
#define MENU_H

#include "definitions.hpp"
#include <iostream>
#include <string>

int menuLogin();
int menuCliente();
int menuBibliotecario();
void menuCadastrarCliente();
int verificarLogin(std::string usuario, std::string senha);

#endif