//Figura 3.12: NotasLivro01.cpp
// Definições de função-membro de NotasLivro. Esse arquivo contém
// implementações das funções-membro prototipadas em NotasLivros01.h.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe NotasLivro

// o construtor inicializa nomecurso com a string fornecida como argumento
GradeBook::GradeBook(string nome)
{
    setCourseName(nome); // chama a função set para inicializar nomeCurso
} // fim do construtor NotasLivro

// função para configurar o nome do curso
void GradeBook::setCourseName(string nome)
{
    courseName = nome; // armazena o nome do curso no objeto
} // fim da função setNomeCurso

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