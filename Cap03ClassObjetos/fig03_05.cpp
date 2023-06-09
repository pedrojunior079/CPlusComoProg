//Figura 3.5: fig03_05.cpp
// Define a classe NotasLivro que contém um membro de dados nomeCurso
// e funções-membro para configurar e obter seu valor;
// Cria e manipular um objeto NotasLivro com essas funções.
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
    //função que configura o nome do curso
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
    string nomeDoCurso; // strings de caracteres para armazenar o nome do curso
    NotasLivro minhaNotasLivro; // cria um objeto NotasLivro chamado minhaNotasLivro
    
    // exibe valor inicial de nomeCurso
    cout << "Nome inicial do curso foi: " << minhaNotasLivro.getNomeCurso() 
    << endl;

    // solicita, insere e configura o nome do curso
    cout << "Por favor entre com o nome do curso:" << endl;
    getline(cin, nomeDoCurso); // le o nome de um curso com espaços em branco
    minhaNotasLivro.setNomeCurso(nomeDoCurso); // configura o nome do curso

    cout << endl; // gera saida de uma linha em branco
    minhaNotasLivro.telaMensagem(); 
    return 0; // indica terminação bem-sucedida
} // fim de main