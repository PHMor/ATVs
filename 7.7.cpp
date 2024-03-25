#include <iostream>
using namespace std;

int main(){
    int idade;
    bool permisao_pais = false;
    bool numero_valido = false;
    bool acidentes = false;
    bool apto = false;
    cout<<boolalpha;
    cout<<"Qual a sua idade?\n";
    cin>>idade;
    cout<<"Voce possui autorizacao dos pais?\n"<<"Digite 1 para sim | 0 para nao\n";
    cin>>permisao_pais;
    cout<<"Voce se envolveu em acidentes?\n"<<"Digite 1 para sim | 0 para nao\n";
    cin>>acidentes;
    cout<<"Voce possui um numero valido de segueranca social?\n"<<"Digite 1 para sim | 0 para nao\n";
    cin>>numero_valido;
    apto =((idade>=18||(idade>=15&&permisao_pais))&&numero_valido&&!acidentes);
    cout<<"\nVoce eh valido para o emprego: "<<apto;
    return 0;
}