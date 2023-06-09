//Figura 3.16: GradeBook.cpp
// Implementações das definições de função-membro de GradeBook.
// A função setCourseName realiza a validação.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe NotasLivro

// o construtor inicializa nomecurso com a string fornecida como argumento
GradeBook::GradeBook(string nome)
{
    setCourseName(nome); // chama a função set para inicializar nomeCurso
} // fim do construtor GradeBook

// função para configurar o nome do curso
// assegura que o nome do curso tenha no maximo 25 caracteres
void GradeBook::setCourseName(string nome)
{
    if(nome.length() <= 25) // se o nome tiver 25 ou menos caracteres
       courseName = nome; // armazena o nome do curso no objeto
    
    if(nome.length() > 25) // se o nome tiver mais de 25 caracteres
    {
        // configura courseName como os primeiros 25 caracteres do parametro nome
        courseName = nome.substr(0, 25); // inicia em 0, compirmento de 25
    } // fim do if
} // fim da função setCourseName

// função para obter o nome do curso
string GradeBook::getCourseName()
{
    return courseName; // retorna nomeCurso do objeto
} // fim da função getNomeCurso

// exibe uma mensagem de boas-vindas para o usuário NotasLivro
void GradeBook::displayMessage()
{
    // chama getNomeCurso para obter o nomeCurso
    cout << "Bemvindo ao livro de notas para\n" << getCourseName()
     << "!" << endl;
} // fim da função telaMensagem