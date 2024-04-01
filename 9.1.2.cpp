#include <iostream>
using namespace std;

int main() {
    char op,amg;
    float n1,n2,r;
    cout<<"Qual operacao quer realizar?s(subtracao)/a(adicao)/m(multiplicacao)/d(divisao)\n";
    cin>>op;
    switch (op){
    case 's':
    case 'S':
        cout<<"Digite dois numero separados por um espaco(10 2): ";
        cin>>n1>>n2;
        r=n1-n2;
        cout<<"Resultado: "<<r<<endl;
        cout<<"Digite 0 para fazer outra conta.";
        cin>>amg;
        break;

    case 'a':
    case 'A':
        cout<<"Digite dois numero separados por um espaco(10 2): ";
        cin>>n1>>n2;
        r=n1+n2;
        cout<<"Resultado: "<<r<<endl;
        cout<<"Digite 0 para fazer outra conta.";
        cin>>amg;
        break;

        case 'm':
        case 'M':
        cout<<"Digite dois numero separados por um espaco(10 2): ";
        cin>>n1>>n2;
        r=n1*n2;
        cout<<"Resultado: "<<r<<endl;
        cout<<"Digite 0 para fazer outra conta.";
        cin>>amg;
        break;

        case 'd':
        case 'D':
        cout<<"Digite dois numero separados por um espaco(10 2): ";
        cin>>n1>>n2;
        r=n1/n2;
        cout<<"Resultado: "<<r<<endl;
        cout<<"Digite 0 para fazer outra conta.";
        cin>>amg;
        break;
    
    default:cout<<"Invalido, por favor escolha uma opcao valida.\n";
    return main();
        break;
    }
    return main();
    return 0;
}