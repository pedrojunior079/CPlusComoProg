//Figura 3.9: NotasLivro.h
// Definição de classe GradeBook em um arquivo main separado.
#include <iostream>
using std::cout;
using std::endl;

#include <string> // o programa utiliza classe de string padrão C++
using std::string;

// definição da classe NotasLivro
class NotasLivro
{
public:
    // o construtor inicializa nomeCurso com a string fornecida como argumento
    NotasLivro(string nome)
    {
        setNomeCurso(nome);
    }

    // função que configura o nome do curso
    void setNomeCurso(string nome)
    {
        nomeCurso = nome; // armazena o nome do curso no objeto
    } // fim da função setNomeCurso

    // função que obtém o nome do curso
    string getNomeCurso()
    {
        return nomeCurso; // retorna o nomeCurso do objeto
    } // fim da função getNomeCurso
    
    // função que exibe uma mensagem de boas-vindas ao usuário do NotasLivro
    void telaMensagem()
    {
        cout << "Bem-vindo ao livro de notas para\n" << getNomeCurso() <<
         "!" << endl;
    } // fim da função telaMensagem
private:
   string nomeCurso; // nome do curso para esse NotasLivro     
}; // fim da classe NotasLivro

