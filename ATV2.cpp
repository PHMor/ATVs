using namespace std;
#include <iostream>
#include <stdlib.h>
int main () {
    int nqp;
    int nqg;
    const int vqg = 150;
    const int vqp = 100;
    int c;
    double tx = 0.06;
    double imp;
    double ct;
    cout << "Quantos quartos pequenos serao limpos?";
    cin >> nqp;
     cout << "Quantos quartos grandes serao limpos?";
    cin >> nqg;
    system ("cls");
    c = (nqp*vqp)+(nqg*vqg);
    imp = c*tx;
    ct = c+imp;
    cout <<"Orcamento para servico de limpeza de carpetes\nNumero de quartos pequenos: "<<nqp<<"\nValor por quarto pequeno: "<<vqp<<"\nNumero de quartos grandes: "<<nqg<<"\nValor por quarto grande: "<<vqg<<"\nCusto: "<<c<<"\nImposto: "<<imp<<"\n===============================================\nCusto total: "<<ct<<"\nOrçamento valido por 30 dias";
    return 0;
}
