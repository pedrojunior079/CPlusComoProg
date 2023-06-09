//Figura 3.3: fig03_03.cpp
// Define a classe NotasLivro com uma função-membro que aceita um parametro;
// Cria um objeto NotasLivro e chama sua função telaMensagem.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa utiliza classe de string padrão C++
using std::string;
using std::getline;

// Define da classe NotasLivro
class NotasLivro
{
public:    
    // função que exibe uma mensagem de boas-vindas ao usuário do NotasLivro
    void telaMensagem(string nomeCurso)
    {
        cout << "Bem-vindo ao livro de notas para\n" << nomeCurso <<
         "!" << endl;
    } // fim da função telaMensagem
}; // fim da classe NotasLivro

// a função main inicia a execução do programa
int main()
{
    string nomeDoCurso; // strings de caracteres para armazenar o nome do curso
    NotasLivro minhaNotasLivro; // cria um objeto NotasLivro chamado minhaNotasLivro
    
    // prompt para entrada do nome do curso
    cout << "`Por favor entre com o nome do curso:" << endl;
    getline(cin, nomeDoCurso); // le o nome de um curso com espaços em branco
    cout << endl; // gera saida de uma linha em branco
    
    // chama a função telaMensagem de minhaNotasLivro
    // e passa nomeDoCurso como um argumento
    minhaNotasLivro.telaMensagem(nomeDoCurso); 
    return 0; // indica terminação bem-sucedida
} // fim de main