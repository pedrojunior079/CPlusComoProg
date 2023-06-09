//Figura 3.17: fig03_17.cpp
// Cria e manipula um objeto GradeBook; ilustra a validação. 
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe NotasLivro


// a função main inicia a execução do programa
int main()
{
    // cria dois objetos GradeBook
    // nome inicial de curso gradeBook1 é muito longo
    GradeBook gradeBook1("CS101 Introducao a Programacao em C++");
    GradeBook gradeBook2("CS102 Programacao em Python");
    
    // exibe courseName de cada GradeBook
    cout << "gradeBook1 o nome do curso inicial e: " 
    << gradeBook1.getCourseName() 
    << "\ngradeBook2 o nome do curso inicial e: " 
    << gradeBook2.getCourseName()
    << endl;

    //modifica courseName do myGradeBook (com uma string de comprimento valido)
    gradeBook1.setCourseName("CS101 Programacao Java");

    // exibe courseName de cada GradeBook
    cout << "\ngradeBook1 nome do curso foi: " 
       << gradeBook1.getCourseName()
       << "\ngradeBook2 nome do curso foi: " 
       << gradeBook2.getCourseName() << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main