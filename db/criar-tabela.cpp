#include <iostream>
#include <pqxx/pqxx>
#include <string>

using namespace std;
// using namespace pqxx;

int main(int argc, char *argv[]) {
  //   char *sql;
  std::string sql_usuarios;
  std::string sql_estantes;
  std::string sql_prateleiras;
  std::string sql_livros;
  std::string sql_reservas;
  std::string sql_emprestimos;

  std::string sql_final = "";

  try {
    pqxx::connection C("dbname = biblioteca user = postgres password = 123123 \
      hostaddr = 127.0.0.1 port = 5432");
    if (C.is_open()) {
      cout << "Opened database successfully: " << C.dbname() << endl;
    } else {
      cout << "Can't open database" << endl;
      return 1;
    }

    // Cria a tabela de usuarios
    sql_usuarios = "CREATE TABLE usuarios("
                   "ID               SERIAL PRIMARY KEY        NOT NULL,"
                   "NOME             VARCHAR(50)               NOT NULL,"
                   "SENHA            VARCHAR(50)               NOT NULL,"
                   "TIPO_USUARIO     BOOLEAN                   NOT NULL,"
                   "EMAIL            VARCHAR(50)               NOT NULL,"
                   "TELEFONE         VARCHAR(20)               NOT NULL);";

    // Cria a tabela de estantes
    sql_estantes = "CREATE TABLE estantes("
                   "ID                SERIAL PRIMARY KEY        NOT NULL,"
                   "CATEGORIA         VARCHAR(50)               NOT NULL);";

    // Cria a tabela de prateleiras
    sql_prateleiras = "CREATE TABLE prateleiras("
                      "ID                   SERIAL PRIMARY KEY     NOT NULL,"
                      "ASSUNTO              VARCHAR(50)            NOT NULL,"
                      "ESTANTE_ID           INT                    NOT NULL);";

    // Cria a tabela de livros
    sql_livros = "CREATE TABLE livros("
                 "ID                       SERIAL PRIMARY KEY    NOT NULL,"
                 "NOME                     VARCHAR(50)           NOT NULL,"
                 "AUTOR                    VARCHAR(50)           NOT NULL,"
                 "EDICAO                   VARCHAR(50)           NOT NULL,"
                 "ASSUNTO                  VARCHAR(50)           NOT NULL,"
                 "QTDE_DISPONIVEL          INT                   NOT NULL,"
                 "ESTANTE_ID               INT                   NOT NULL,"
                 "PRATELEIRA_ID            INT                   NOT NULL);";

    // Cria a tabela de reservas
    sql_reservas =
        "CREATE TABLE reservas("
        "ID                         SERIAL PRIMARY KEY    NOT NULL,"
        "ID_CLIENTE                 INT                   NOT NULL,"
        "ID_LIVRO                   INT                   NOT NULL);";

    // Cria tabela de emprestimos
    sql_emprestimos =
        "CREATE TABLE emprestimos("
        "ID                         SERIAL PRIMARY KEY    NOT NULL,"
        "ID_CLIENTE                 INT                   NOT NULL,"
        "ID_LIVRO                   INT                   NOT NULL);";

    if (string(argv[1]) == "usuarios") {
      sql_final = sql_usuarios;
    } else if (string(argv[1]) == "estantes") {
      sql_final = sql_estantes;
    } else if (string(argv[1]) == "prateleiras") {
      sql_final = sql_prateleiras;
    } else if (string(argv[1]) == "livros") {
      sql_final = sql_livros;
    } else if (string(argv[1]) == "reservas") {
      sql_final = sql_reservas;
    } else if (string(argv[1]) == "emprestimos") {
      sql_final = sql_emprestimos;
    } else {
      std::cout << "Parametro errado!" << endl;
    };

    /* Create a transactional object. */
    pqxx::work W(C);

    /* Execute SQL query */
    W.exec(sql_final);
    W.commit();

    cout << "Table created successfully" << endl;

    // C.disconnect();

  } catch (const std::exception &e) {
    cerr << e.what() << std::endl;
    return 1;
  }

  return 0;
}