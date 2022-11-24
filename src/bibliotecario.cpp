#include "bibliotecario.hpp"
#include "definitions.hpp"
#include <iostream>

Bibliotecario::Bibliotecario() {
}

Bibliotecario::Bibliotecario(Usuario *usuario) {
	_id = usuario->getId();
	_tipoDeUsuario = usuario->getTipoUsuario();
	_nome = usuario->getNome();
	_senha = usuario->getSenha();
	_email = usuario->getEmail();
	_telefone = usuario->getTelefone();
}

Bibliotecario::Bibliotecario(int id, bool tipoDeUsuario, std::string nome, std::string senha, std::string email, std::string telefone) {
	_id = id;
	_tipoDeUsuario = tipoDeUsuario;
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
}

Bibliotecario::Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone) {
	_nome = nome;
	_senha = senha;
	_email = email;
	_telefone = telefone;
}

Bibliotecario::Bibliotecario(std::string nome, std::string email, std::string telefone) {
	_nome = nome;
	_email = email;
	_telefone = telefone;
}

void Bibliotecario::cadastrarCliente() {

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

	// fazer um try-catch aqui
	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {

		pqxx::work W(C);

		std::string sql = "INSERT INTO usuarios (NOME,SENHA,TIPO_USUARIO,EMAIL,TELEFONE) VALUES ('" + novoCliente.getNome() + "','" + novoCliente.getSenha() + "',True,'" + novoCliente.getEmail() + "','" + novoCliente.getTelefone() + "');";

		W.exec(sql);

		W.commit();

		std::cout << "Cliente cadastrado com sucesso!" << std::endl;
	} else {
		std::cout << "Falha no BD - Cadastro Cliente" << std::endl;
	};
}

void Bibliotecario::cadastrarEstante() {
	std::cout << "Entrou cadastro estante" << std::endl;

	// Bibliotecario *b = new Bibliotecario(user);

	std::string categoria;

	std::cout << "Digite a categoria da estante: ";
	std::cin >> categoria;

	Estante novaEstante = Estante(categoria);

	// b->cadastrarEstante(&novaEstante);

	// delete b;

	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {

		pqxx::work W(C);

		std::string sql = "INSERT INTO estantes (CATEGORIA) VALUES ('" + novaEstante.getCategoria() + "');";

		// std::cout << "sql: " << sql << std::endl;

		W.exec(sql);

		W.commit();

		std::cout << "Estante cadastrada com sucesso!" << std::endl;
	} else {
		std::cout << "Falha no BD - Cadastro Estante" << std::endl;
	};
}

void Bibliotecario::cadastrarPrateleira(Bibliotecario *b) {
	std::cout << "Entrou cadastro prateleira" << std::endl;

	// Bibliotecario *b = new Bibliotecario(user);

	std::string assunto, categoria;
	int estanteID;

	std::cout << "Digite o assunto da prateleira: ";
	std::cin >> assunto;

	std::cout << "Digite a categoria da prateleira: ";
	std::cin >> categoria;

	estanteID = b->buscaEstanteIDnobanco(categoria);

	Prateleira novaPrateleira = Prateleira(assunto, estanteID);

	// b->cadastrarPrateleira(&novaPrateleira);

	// delete b;

	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {

		pqxx::work W(C);

		std::string sql = "INSERT INTO prateleiras (ASSUNTO,ESTANTE_ID) VALUES ('" + novaPrateleira.getAssuntoPrateleira() + "','" + std::to_string(novaPrateleira.getEstanteDaPrateleira()) + "');";

		// std::cout << "sql: " << sql << std::endl;

		W.exec(sql);

		W.commit();

		std::cout << "Prateleira cadastrada com sucesso!" << std::endl;
	} else {
		std::cout << "Falha no BD - Cadastro Prateleira" << std::endl;
	};
}

void Bibliotecario::cadastrarLivro() {
}

int Bibliotecario::buscaEstanteIDnobanco(std::string categoria) {

	int estanteID;

	pqxx::connection C("dbname = biblioteca user = postgres password = 123123 host = localhost port = 5432");

	if (C.is_open()) {
		// std::cout << "Foi banco" << std::endl;

		pqxx::nontransaction N(C);

		std::string sql = "SELECT id FROM estantes WHERE categoria ='" + categoria + "';";

		pqxx::result R(N.exec(sql));

		// std::cout << "Tam R: " << R.size() << std::endl;

		if (R.size() != 0) {
			estanteID = R[0][0].as<int>();
		}
	}

	return estanteID;
}

int Bibliotecario::exibeMenu() const {
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
		"10 - Ver perfil \n"
		"11 - Logoff \n";

	int opcao;

	std::cout << textoMenuBibliotecario << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}