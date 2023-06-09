//Figura 3.1: fig03_01.cpp
// Define a classe NotasLivro com uma função-membro telaMensagem;
// Cria um objeto NotasLivro e chama sua função telaMensagem.
#include <iostream>
using std::cout;
using std::endl;

// Define da classe NotasLivro
class NotasLivro
{
public:    
    // função que exibe uma mensagem de boas-vindas ao usuário do NotasLivro
    void telaMensagem()
    {
        cout << "Bemvindo ao Livro de Notas!" << endl;
    } // fim da função telaMensagem
}; // fim da classe NotasLivro

// a função main inicia a execução do programa
int main()
{
    NotasLivro minhaNotasLivro; // cria um objeto NotasLivro chamado minhaNotasLivro
    minhaNotasLivro.telaMensagem(); // chama função telaMensagem do objeto
    return 0;
}