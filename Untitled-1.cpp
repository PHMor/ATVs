using namespace std;
#include <iostream>
#include <stdlib.h>
int idade; //Define variável inteira para idade do usuario.
string nome; //Define uma variavel de texto para o nome do usuario.
const double hora_salario = 23.5; //Define uma constante para a hora salario.
int main () { 
cout <<"Qual seu nome e sua idade respectivamente? (Escreva o nome e separe a idade com um espaco)\n"; //Solicita ao usuario o seu nome e idade em apenas uma linha.
cin >> nome>>idade; //Armazena as informações nas variaveis citadas.
system("cls"); //Limpa
cout <<"Nome: "<<nome<<endl<<"Idade: "<<idade<<endl<<"Hora salario: "<<hora_salario;
    return 0;
}
