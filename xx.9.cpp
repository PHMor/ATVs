#include <iostream>
#include <cmath>
using namespace std;

int main(){
char p;
cout<<"P para Pessoa Fisica | J para Pessoa Juridica\n";
cin>>p;
switch (p)
{
case 'P':
case 'p':
    cout<<"Pessoa Fisica";
    break;

case 'J':
case 'j':
    cout<<"Pessoa Juridica";
    break;

default: cout<<"Escreva um valor valido\n"; 
return main();
    break;
}

return 0;
}