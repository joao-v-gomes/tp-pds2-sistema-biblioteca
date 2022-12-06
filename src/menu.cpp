#include "menu.hpp"
#include <exception>

int menuLogin(Usuario *user) {
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

	std::cout << "\n\n";

	std::cout << "Validando login... Aguarde...";

	std::cout << "\n\n";

	tipoLogin = verificarLogin(user, usuario, senha);

	// std::cout << user->getNome() << std::endl;
	// std::cout << user->getEmail() << std::endl;
	// std::cout << user->getTelefone() << std::endl;

	return tipoLogin;
}

int verificarLogin(Usuario *user, std::string usuario, std::string senha) {
	int statusLogin;

	// verificar no banco o login e senha
	// retornar o tipo de usuario para saber em qual menu entrar
	// try-catch aqui tambem
	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {
		// std::cout << "Foi banco" << std::endl;

		pqxx::nontransaction N(C);

		std::string sql = "SELECT * FROM usuarios WHERE nome ='" + usuario + "';";

		pqxx::result R(N.exec(sql));

		std::string nomeBD, senhaBD, emailBD, telefoneBD;
		bool tipoDeUsuario;

		// std::cout << "Tam R: " << R.size() << std::endl;

		if (R.size() != 0) {
			nomeBD = R[0][1].as<std::string>();
			senhaBD = R[0][2].as<std::string>();
			tipoDeUsuario = R[0][3].as<bool>();
			emailBD = R[0][4].as<std::string>();
			telefoneBD = R[0][5].as<std::string>();

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

				user->setNome(nomeBD);
				user->setEmail(emailBD);
				user->setTelefone(telefoneBD);
				user->setTipoUsuario(tipoDeUsuario);

				statusLogin = LOGIN_FEITO;

				// std::cout << user->getNome() << std::endl;
				// std::cout << user->getEmail() << std::endl;
				// std::cout << user->getTelefone() << std::endl;

				// if (tipoDeUsuario == 1) {
				// 	tipoLogin = LOGIN_CLIENTE;

				// 	// user = new Usuario(nomeBD, emailBD, telefoneBD);

				// } else {
				// 	tipoLogin = LOGIN_BIBLIOTECARIO;

				// 	// user = new Usuario(nomeBD, emailBD, telefoneBD);
				// }
			} else {
				throw std::invalid_argument("Senha incorreta!");
				//std::cout << "Senha incorreta!" << std::endl;
				statusLogin = LOGIN_ERRO;
			}
		} else {
			throw std::invalid_argument("Login incorreto!");
			//std::cout << "Login incorreto!" << std::endl;
			statusLogin = LOGIN_ERRO;
		}

	} else {
		throw std::invalid_argument("Erro no banco");
		//std::cout << "Erro no banco!" << std::endl;
	};

	return statusLogin;
}

// int menuCliente() {
// 	std::string textoMenuCliente =
// 		"1 - Pesquisar livro pelo nome \n"
// 		"2 - Pesquisar livro pelo autor \n"
// 		"3 - Pesquisar livro pelo assunto \n"
// 		"4 - Pesquisar reservas de livros \n"
// 		"5 - Conferir lista de livros emprestados \n"
// 		"6 - Conferir valor da multa \n"
// 		"7 - Pagar multa \n"
// 		"8 - Ver perfil \n"
// 		"9 - Logoff \n";

// 	int opcao;

// 	std::cout << textoMenuCliente << std::endl;

// 	std::cout << "Digite a opcao escolhida: ";

// 	std::cin >> opcao;

// 	return opcao;
// }

// int menuBibliotecario() {
// std::string textoMenuBibliotecario =
// 	"1 - Pesquisar livro pelo nome \n"
// 	"2 - Pesquisar livro pelo autor \n"
// 	"3 - Pesquisar livro pelo assunto \n"
// 	"4 - Pesquisar reservas de livros \n"
// 	"5 - Emprestar livro \n"
// 	"6 - Cadastrar livro \n"
// 	"7 - Cadastrar prateleira \n"
// 	"8 - Cadastrar estante \n"
// 	"9 - Cadastrar cliente \n"
// 	"10 - Ver perfil \n"
// 	"11 - Logoff \n";

// int opcao;

// std::cout << textoMenuBibliotecario << std::endl;

// std::cout << "Digite a opcao escolhida: ";

// std::cin >> opcao;

// return opcao;
// }

// void menuPesquisaLivroNome() {

// 	std::string nomeLivro;

// 	std::cout << "Digite o nome do livro: ";

// 	std::cin >> nomeLivro;

// 	// pesquisa no banco o nome do livro
// }

// void menuCadastrarCliente(Usuario *user) {

// std::cout << "Entrou cadastro cliente" << std::endl;

// Bibliotecario *b = new Bibliotecario(user);

// // std::cout << user->getNome() << std::endl;
// // std::cout << user->getEmail() << std::endl;
// // std::cout << user->getTelefone() << std::endl;

// std::string nome, senha, email, telefone;

// std::cout << "Digite o nome do Cliente: ";
// std::cin >> nome;
// std::cout << "Digite a senha do Cliente: ";
// std::cin >> senha;
// std::cout << "Digite o email do Cliente: ";
// std::cin >> email;
// std::cout << "Digite o telefone do Cliente: ";
// std::cin >> telefone;

// Cliente novoCliente = Cliente(nome, senha, email, telefone);

// // std::cout << "Nome: " << novoCliente.getNome() << std::endl;
// // std::cout << "Senha: " << novoCliente.getSenha() << std::endl;
// // std::cout << "Email: " << novoCliente.getEmail() << std::endl;
// // std::cout << "Telefone: " << novoCliente.getTelefone() << std::endl;

// b->cadastrarCliente(&novoCliente);

// delete b;
// }

// void menuCadastraEstante(Usuario *user) {
// std::cout << "Entrou cadastro estante" << std::endl;

// Bibliotecario *b = new Bibliotecario(user);

// std::string categoria;

// std::cout << "Digite a categoria da estante: ";
// std::cin >> categoria;

// Estante novaEstante = Estante(categoria);

// b->cadastrarEstante(&novaEstante);

// delete b;
// }

// void menuCadastraPrateleira(Usuario *user) {
// std::cout << "Entrou cadastro prateleira" << std::endl;

// Bibliotecario *b = new Bibliotecario(user);

// std::string assunto, categoria;
// int estanteID;

// std::cout << "Digite o assunto da prateleira: ";
// std::cin >> assunto;

// std::cout << "Digite a categoria da prateleira: ";
// std::cin >> categoria;

// estanteID = b->buscaEstanteIDnobanco(categoria);

// Prateleira novaPrateleira = Prateleira(assunto, estanteID);

// b->cadastrarPrateleira(&novaPrateleira);

// delete b;
// }

// void menuCadastraLivro(Usuario *user) {
// 	std::cout << "Entrou cadastro livro" << std::endl;

// 	std::string nome, autor, edicao, assunto;

// 	std::cout << "Digite o nome do Livro: ";
// 	std::cin >> nome;
// 	std::cout << "Digite o nome do autor do Livro: ";
// 	std::cin >> autor;
// 	std::cout << "Digite a edição do Livro: ";
// 	std::cin >> edicao;
// 	std::cout << "Digite o assunto do Livro: ";
// 	std::cin >> assunto;

// 	Livro novoLivro = Livro(nome, autor, edicao, assunto);

// std::cout << "Nome: " << novoLivro.getNomeLivro() << std::endl;
// std::cout << "Autor: " << novoLivro.getAutorLivro() << std::endl;
// std::cout << "Edicao: " << novoLivro.getEdicaoLivro() << std::endl;
// std::cout << "Assunto: " << novoLivro.getAssuntoLivro() << std::endl;

// pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

// if (C.is_open()) {

// 	pqxx::work W(C);

// 	// std::string sql = "INSERT INTO livro (NOME,AUTOR,EDICAO,ASSUNTO) VALUES ('" + novoLivro.getNome() + "','" + novoLivro.getAutorLivro() + "','" + novoLivro.getEdicaoLivro() + "','" + novoLivro.getAssuntoLivro() + "');";

// 	// std::string sql = "INSERT INTO livros (NOME,AUTOR,EDICAO,ASSUNTO,QTDE_DISPONIVEL,ESTANTE_ID,PRATELEIRA_ID) VALUES ('" + nome + "','" + autor + "','" + edicao + "','" + assunto + "','" + );";

// 	// std::cout << "sql: " << sql << std::endl;

// 	W.exec(sql);

// 	W.commit();

// 	std::cout << "Livro cadastrado com sucesso!" << std::endl;
// } else {
// 	std::cout << "Falha no BD - Cadastro Livro" << std::endl;
// };
// }