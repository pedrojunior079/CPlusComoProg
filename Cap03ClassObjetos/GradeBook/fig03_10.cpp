//Figura 3.10: fig03_10.cpp
// Incluindo a classe NotasLivro a partir do arquivo NotasLivro.h para uso em main
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe NotasLivro

// a função main inicia a execução do programa
int main()
{
    // cria dois objetos NotasLivro
    NotasLivro notasLivro1("Introducao a Programacao C++");
    NotasLivro notasLivro2("Estrutura data em C++");
    
    // exibe valor inicial de nomeCurso para cada NotasLivro
    cout << "notasLivro1 criado para o curso: " << notasLivro1.getNomeCurso() 
    << "\nnotasLivro2 criado para o curso: " << notasLivro2.getNomeCurso()
    << endl;
        
    return 0; // indica terminação bem-sucedida
} // fim de main