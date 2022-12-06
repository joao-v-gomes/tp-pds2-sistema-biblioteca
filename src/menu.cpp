#include "menu.hpp"
#include <exception>

int menuLogin(Usuario *user) {
	std::cout << "---- Bem-vindo ao Sistema de Biblioteca 42!!! -----" << std::endl;
	std::cout << "\t-- Faça login para acessar o sistema --\n\n";

	int tipoLogin;
	
	std::string usuario, senha;

	std::cout << "\tUsuário: ";

	std::cin >> usuario;

	std::cout << "\tSenha: ";

	std::cin >> senha;

	std::cout << "\n\n";

	std::cout << "Validando login... Aguarde...";

	std::cout << "\n\n";

	tipoLogin = verificarLogin(user, usuario, senha);

	return tipoLogin;
}

int verificarLogin(Usuario *user, std::string usuario, std::string senha) {
	int statusLogin;

	// verificar no banco o login e senha
	// retornar o tipo de usuario para saber em qual menu entrar
	// try-catch aqui tambem
	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {

		pqxx::nontransaction N(C);

		std::string sql = "SELECT * FROM usuarios WHERE nome ='" + usuario + "';";

		pqxx::result R(N.exec(sql));

		std::string nomeBD, senhaBD, emailBD, telefoneBD;
		bool tipoDeUsuario;

		if (R.size() != 0) {
			nomeBD = R[0][1].as<std::string>();
			senhaBD = R[0][2].as<std::string>();
			tipoDeUsuario = R[0][3].as<bool>();
			emailBD = R[0][4].as<std::string>();
			telefoneBD = R[0][5].as<std::string>();

			if (senha == senhaBD) {

				user->setNome(nomeBD);
				user->setEmail(emailBD);
				user->setTelefone(telefoneBD);
				user->setTipoUsuario(tipoDeUsuario);

				statusLogin = LOGIN_FEITO;

			} else {
				throw std::invalid_argument("Senha incorreta!");
				statusLogin = LOGIN_ERRO;
			}
		} else {
			throw std::invalid_argument("Login incorreto!");
			statusLogin = LOGIN_ERRO;
		}

	} else {
		throw std::invalid_argument("Erro no banco");
	};

	return statusLogin;
}
