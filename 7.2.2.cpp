#include <iostream>
using namespace std;

int main() {
    int ano_atual,ano_nasc,idade;
    cout<<"Qual ano estamos e em qual nasceu?(separe por um espaço)\n";
    cin>>ano_atual>>ano_nasc;
    idade=ano_atual-ano_nasc;
    cout<<"Voce tem "<<idade-1<<" ou "<<idade<<" anos, dependendo do mes em que nasceu.";
    return 0;
}