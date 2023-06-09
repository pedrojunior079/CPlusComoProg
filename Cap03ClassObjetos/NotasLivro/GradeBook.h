//Figura 3.11: GradeBook.h
// Definição de classe GradeBook. Esse arquivo apresenta a interface publica
// de GradeBook sem revelar as implemtações de função-membro de GradeBook
// que são definidas em GradeBook.cpp
#include <string> // o programa utiliza classe de string padrão C++
using std::string;

// definição da classe NotasLivro
class GradeBook
{
public:
    GradeBook(string); // construtor que inicializa courseName
    void setCourseName(string); // função que configura o nome do curso
    string getCourseName(); // função que obtem o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
private:
   string courseName; // nome do curso para esse GradeBook     
}; // fim da classe GradeBook

