#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#include <pqxx/pqxx>

/**
 * @file bibliotecario.hpp
 * @author João 
 * @brief  Arquivo com os #defines utilizados no código
 * @version 1.0
 * @date 05-12-2022
 * @details Compilado de #defines de valores utilizados constantemente ao longo do código.
 * @copyright GNU General Public License v2.0.
 */

#define SAIR				-1
#define INIT				4
#define LOGIN_BIBLIOTECARIO 0
#define LOGIN_CLIENTE		1
#define LOGIN_ERRO			2
#define LOGIN_FEITO			5

#define MENU_CLIENTE	   2
#define MENU_BIBLIOTECARIO 3

#define PESQUISAR_LIVRO_NOME_BIBLIOTECARIO	  1
#define PESQUISAR_LIVRO_AUTOR_BIBLIOTECARIO	  2
#define PESQUISAR_LIVRO_ASSUNTO_BIBLIOTECARIO 3
#define PESQUISAR_RESERVAS_BIBLIOTECARIO	  4
#define EMPRESTAR_LIVRO_BIBLIOTECARIO		  5
#define CADASTRAR_LIVRO_BIBLIOTECARIO		  6
#define CADASTRAR_PRATELEIRA_BIBLIOTECARIO	  7
#define CADASTRAR_ESTANTE_BIBLIOTECARIO		  8
#define CADASTRAR_CLIENTE_BIBLIOTECARIO		  9
#define VER_PERFIL_BIBLIOTECARIO			  10
#define LOGOFF_BIBLIOTECARIO				  11
#define SAIR_BIBLIOTECARIO					  12

#define PESQUISAR_LIVRO_NOME_CLIENTE	   1
#define PESQUISAR_LIVRO_AUTOR_CLIENTE	   2
#define PESQUISAR_LIVRO_ASSUNTO_CLIENTE	   3
#define PESQUISAR_RESERVAS_CLIENTE		   4
#define CONFERIR_LISTA_EMPRESTIMOS_CLIENTE 5
#define CONFERIR_VALOR_MULTA_CLIENTE	   6
#define PAGAR_MULTA_CLIENTE				   7
#define VER_PERFIL_CLIENTE				   8
#define LOGOFF_CLIENTE					   9
#define SAIR_CLIENTE					   10

#endif