// Figura 2.5 fig02_03.cpp
// Programa de adição que exibe a soma de dois números.
#include <iostream> // permite que o programa gere saida de dados na tela

// a função main inicia a execução do programa
int main()
{
    //declarações de variavel
    int numero1; // primeiro inteiro a adicionar
    int numero2; // segundo inteiro a adicionar
    int soma; // soma de numero1 e numero2
    int sub;  // subtração de numero1 e numero2
    int mult; // multiplicação de numero1 e numero2
    int div;  // divisão de numero1 e numero2

    std::cout << "Entre com primeiro inteiro: "; // solicita dados ao usuário
    std::cin  >> numero1; // le primeiro inteiro inserido pelo usuario em numero1

    std::cout << "Entre com o segundo inteiro: "; // solicita dados do usuario
    std::cin >> numero2; // le segundo inteiro inserindo pelo usuario em numero2

    soma = numero1 + numero2; // adiciona os numeros; armazema o resultado em soma
    sub = numero1 - numero2; // adiciona os numeros; armazema o resultado em subtração
    mult = numero1 * numero2; // adiciona os numeros; armazema o resultado em multiplicação
    div = numero1 / numero2; // adicona os numeros; armazena o resultado em divisão
    
    std::cout << "Soma foi: " << soma << std::endl; // exibe soma; termina a linha
    std::cout << "Subtracao foi: " << sub << std::endl; // exibe subtração; termina a linha
    std::cout << "Multiplicacao foi: " << mult << std::endl; // exibe multiplicação; termina a linha
    std::cout << "Divisao foi: " << div << std::endl; // exibe divisão; termina a linha
    
    return 0; // indica que o programa terminou com sucesso
} // fim da função main