#include <iostream>
using namespace std;

int main() {
    float reais;
    float pd = 4.97;
    float pe = 5.39;
    float vcd, vce;
    cout <<"Quantos reais voce possui?";
    cin >>reais;
    vcd = reais*pd;
    vce = reais*pe;
    cout <<"Cotacao do dia\nDolar: "<<pd<<"\nEuro: "<<pe;
    cout <<"\n=====================================\nValor em dolar: "<<vcd<<"\nValor em euro: "<<vce;

    return 0;
}