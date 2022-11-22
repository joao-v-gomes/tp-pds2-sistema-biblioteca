#include "menu.hpp"

int menuLogin() {
	std::cout << "---- Bem-vindo ao Sistema de Biblioteca 42!!! -----" << std::endl;
	std::cout << "\t-- Faça login para acessar o sistema --\n\n";

	int tipoLogin;

	std::string usuario, senha;

	// std::string textoUsuario = "\tUsuário: ";

	std::cout << "\tUsuário: ";

	std::cin >> usuario;

	// std::string textoSenha = "\tSenha: ";

	std::cout << "\tSenha: ";

	std::cin >> senha;

	std::cout << "Validando login... Aguarde..." << std::endl;

	tipoLogin = verificarLogin(usuario, senha);

	return tipoLogin;
}

int verificarLogin(std::string usuario, std::string senha) {
	int tipoLogin;

	// verificar no banco o login e senha
	// retornar o tipo de usuario para saber em qual menu entrar
	// try-catch aqui tambem
	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {
		// std::cout << "Foi banco" << std::endl;

		pqxx::nontransaction N(C);

		std::string sql = "SELECT senha,tipo_usuario FROM usuarios WHERE nome ='" + usuario + "';";

		pqxx::result R(N.exec(sql));

		std::string senhaBD;
		bool tipoDeUsuario;

		// std::cout << "Tam R: " << R.size() << std::endl;

		if (R.size() != 0) {
			senhaBD = R[0][0].as<std::string>();
			tipoDeUsuario = R[0][1].as<bool>();

			// std::cout << "SenhaBD = " << senhaBD << std::endl;

			// for (pqxx::result::const_iterator c = R.begin(); c != R.end(); ++c) {
			// 	std::cout << "ID = " << c[0].as<int>() << std::endl;
			// 	std::cout << "Nome = " << c[1].as<std::string>() << std::endl;
			// 	std::cout << "Senha = " << c[2].as<std::string>() << std::endl;
			// 	std::cout << "TipoUsuario = " << c[3].as<bool>() << std::endl;
			// 	std::cout << "Email = " << c[4].as<std::string>() << std::endl;
			// 	std::cout << "Telefone = " << c[5].as<std::string>() << std::endl;
			// }

			if (senha == senhaBD) {
				if (tipoDeUsuario == 1) {
					tipoLogin = LOGIN_CLIENTE;
				} else {
					tipoLogin = LOGIN_BIBLIOTECARIO;
				}
			} else {
				std::cout << "Senha incorreta!" << std::endl;
				tipoLogin = LOGIN_ERRO;
			}
		} else {
			std::cout << "Login incorreto!" << std::endl;
			tipoLogin = LOGIN_ERRO;
		}

	} else {
		std::cout << "Erro no banco!" << std::endl;
	};

	return tipoLogin;
}

int menuCliente() {
	std::string textoMenuCliente =
		"1 - Pesquisar livro pelo nome \n"
		"2 - Pesquisar livro pelo autor \n"
		"3 - Pesquisar livro pelo assunto \n"
		"4 - Pesquisar reservas de livros \n"
		"5 - Conferir lista de livros emprestados \n"
		"6 - Conferir valor da multa \n"
		"7 - Pagar multa \n"
		"8 - Ver perfil \n";

	int opcao;

	std::cout << textoMenuCliente << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}

int menuBibliotecario() {
	std::string textoMenuBibliotecario =
		"1 - Pesquisar livro pelo nome \n"
		"2 - Pesquisar livro pelo autor \n"
		"3 - Pesquisar livro pelo assunto \n"
		"4 - Pesquisar reservas de livros \n"
		"5 - Emprestar livro \n"
		"6 - Cadastrar livro \n"
		"7 - Cadastrar prateleira \n"
		"8 - Cadastrar estante \n"
		"9 - Cadastrar cliente \n"
		"10 - Ver perfil \n";

	int opcao;

	std::cout << textoMenuBibliotecario << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}

void menuPesquisaLivroNome() {

	std::string nomeLivro;

	std::cout << "Digite o nome do livro: ";

	std::cin >> nomeLivro;

	// pesquisa no banco o nome do livro
}

void menuCadastrarCliente() {
	std::cout << "Entrou cadastro cliente" << std::endl;

	std::string nome, senha, email, telefone;

	std::cout << "Digite o nome do Cliente: ";
	std::cin >> nome;
	std::cout << "Digite a senha do Cliente: ";
	std::cin >> senha;
	std::cout << "Digite o email do Cliente: ";
	std::cin >> email;
	std::cout << "Digite o telefone do Cliente: ";
	std::cin >> telefone;

	Cliente novoCliente = Cliente(nome, senha, email, telefone);

	// std::cout << "Nome: " << novoCliente.getNome() << std::endl;
	// std::cout << "Senha: " << novoCliente.getSenha() << std::endl;
	// std::cout << "Email: " << novoCliente.getEmail() << std::endl;
	// std::cout << "Telefone: " << novoCliente.getTelefone() << std::endl;

	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {

		pqxx::work W(C);

		std::string sql = "INSERT INTO usuarios (NOME,SENHA,TIPO_USUARIO,EMAIL,TELEFONE) VALUES ('" + novoCliente.getNome() + "','" + novoCliente.getSenha() + "',True,'" + novoCliente.getEmail() + "','" + novoCliente.getTelefone() + "');";

		// std::cout << "sql: " << sql << std::endl;

		W.exec(sql);

		W.commit();

		std::cout << "Cliente cadastrado com sucesso!" << std::endl;
	} else {
		std::cout << "Falha no BD - Cadastro Cliente" << std::endl;
	};
}