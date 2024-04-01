#include <iostream>
using namespace std;

int main() {
    int numero{10};    
    //----ESCREVA SEU CÓDIGO ABAIXO DESTA LINHA----
   int original_number=10;
   
   numero=numero*2; //-- Multiplica o número por 2 e atribui o resultado de volta ao número

   numero=numero+9; //-- Adiciona 9 ao número e atribui o resultado de volta ao número

   numero=numero-3; //-- Subtrair 3 do número e atribuir o resultado de volta ao número

    numero=numero/2;//-- Divide o número por 2 e atribui o resultado de volta ao número

    numero=numero-original_number;//-- Subtrair original_number de number e atribuir o resultado de volta a number

    numero=numero%3;//-- Pegue o módulo 3 (%) do número e atribua-o de volta ao número
cout<<numero;
 
   
    //----ESCREVA SEU CÓDIGO ACIMA DESTA LINHA----
   
    return 0;
}