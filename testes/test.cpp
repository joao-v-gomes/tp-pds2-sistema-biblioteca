#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "usuario.hpp"
#include "cliente.hpp"
#include "erros.hpp"
#include "livro.hpp"
#include <exception>

TEST_CASE("Testando a classe Usuário")
{
    SUBCASE("Caso positivo")
    {
        Usuario u("cauet", "cauetcherfan@email", "12345");
        u.setId(4);
        CHECK_EQ("cauet", u.getNome());
        CHECK_EQ("cauetcherfan@email", u.getEmail());
        CHECK_EQ("12345", u.getTelefone());
        CHECK_EQ(4, u.getId());
        u.setNome("Matheus");
        u.setEmail("math@email");
        u.setTelefone("123");
        CHECK_EQ("Matheus", u.getNome());
        CHECK_EQ("math@email", u.getEmail());
        CHECK_EQ("123", u.getTelefone());
    }
}

TEST_CASE("Testando a classe Cliente")
{
    SUBCASE("Caso negativo")
    {
        Cliente c("João", "321", "joao@email", "31");
        CHECK_THROWS_AS(exibeMenu(), opcaoInvalida());
    }
}

TEST_CASE("Testando o menu")
{
    SUBCASE("Caso negativo")
    {
        Usuario u("Marcelle", "ma@email", "16"); 
        CHECK_THROWS_AS(verificarLogin(), std::exception);
    }
}

TEST_CASE("Testando classe Livro")
{
    SUBCASE("Caso positivo")
    {
        Livro l("PDS", "Camila", "1", "Tecnologia", 3, 1, 2);
        CHECK_EQ("PDS", l.getNomeLivro());
        CHECK_EQ("Camila", l.getAutorLivro());
        CHECK_EQ("1", l.getEdicaoLivro());
        CHECK_EQ("Tecnologia", l.getAssuntoLivro());
        CHECK_EQ(3, l.getQtdeLivro());
        CHECK_EQ(1, l.getEstanteLivro());
        CHECK_EQ(2, l.getPrateleiraLivro());
    }
}