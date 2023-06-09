//Figura 3.13: fig03_13.cpp
// Demonstração de classe GradeBook depois de separar
// sua interface de sua implementação.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe NotasLivro


// a função main inicia a execução do programa
int main()
{
    // cria dois objetos NotasLivro
    GradeBook gradeBook1("Introducao a Programacao C++");
    GradeBook gradeBook2("Programacao em Python");
    
    // exibe valor inicial de nomeCurso para cada NotasLivro
    cout << "livroDeNotas1 criado para o curso: " << gradeBook1.getCourseName() 
    << "\nlivroDeNotas2 criado para o curso: " << gradeBook2.getCourseName()
    << endl;
        
    return 0; // indica terminação bem-sucedida
} // fim de main