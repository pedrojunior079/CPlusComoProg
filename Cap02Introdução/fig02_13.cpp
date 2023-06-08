// Figura 2.13 fig02_13.cpp
// Comparando inteiros utilizando instruções if, operadores relacionais
// e operadores
#include <iostream> // permite que o programa gere saida de dados na tela

using std::cout;   // o programa utiliza cout
using std::cin;    // o programa utiliza cin
using std::endl;   // o programa utiliza endl

// a função main inicia a execução do programa
int main()
{
    //declarações de variavel
    int numero1; // primeiro inteiro a adicionar
    int numero2; // segundo inteiro a adicionar
    

    cout << "Entre com dois inteiro e compare: "; // solicita dados ao usuário
    cin  >> numero1 >> numero2; // le dois numeros fornecidos pelo usuario

    if(numero1 == numero2)
       cout << numero1 << " == " << numero2 << endl;

    if(numero1 != numero2)
       cout << numero1 << " != " << numero2 << endl;

    if(numero1 < numero2)
       cout << numero1 << " < " << numero2 << endl;

    if(numero1 > numero2)
       cout << numero1 << " > " << numero2 << endl;

    if(numero1 <= numero2)
       cout << numero1 << " <= " << numero2 << endl;

    if(numero1 >= numero2)
       cout << numero1 << " >= " << numero2 << endl;
                
    return 0; // indica que o programa terminou com sucesso
} // fim da função main