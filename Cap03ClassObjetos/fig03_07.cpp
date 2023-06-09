//Figura 3.7: fig03_07.cpp
// Instanciando múltiplos objetos da classe NotasLivros e utilizando
// o construtor NotasLivro para especificar o nome do curso
// quando cada objeto NotasLivro é criado.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa utiliza classe de string padrão C++
using std::string;

// Define da classe NotasLivro
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