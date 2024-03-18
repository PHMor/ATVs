using namespace std;
#include <iostream>
#include <stdlib.h>
int main () {
    int nq;
    const int vq = 150;
    int c;
    double tx = 0.06;
    double imp;
    double ct;
    cout << "Quantos quartos serao limpos?";
    cin >> nq;
    system ("cls");
    c = nq*vq;
    imp = c*tx;
    ct = c+imp;
    cout <<"Orcamento para servico de limpeza de carpetes\nNumero de quartos: "<<nq<<"\nValor por quarto: "<<vq<<"\nCusto: "<<c<<"\nImposto: "<<imp<<"\n===============================================\nCusto total: "<<ct;
    return 0;
}
