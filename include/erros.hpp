#include <exception>
#include <string>

class opcaoInvalida : public std::exception{
    private:
        std::string error;
    public:
      opcaoInvalida():
        error("A opção inserida é inválida") {}
      virtual const char* what() const noexcept {
         return error.c_str();
      }
};