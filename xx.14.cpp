#include <iostream>
using namespace std;

int main(){
double x,x2,x3,n,nr,mf;
cout<<"Escreva suas tres notas separadas por um espaco:(ex: '1 2 3')\n";
cin>>x>>x2>>x3;
n=((2*x)+(3*x2)+(5*x3))/10;
if (n>=6&&n<=10) cout<<"Nota:"<<n<<endl<<"Aprovado";
else if (n>=4&&n<=5.9) {
cout<<"Nota: "<<n<<endl<<"Recuperacao\n";
cout<<"Qual foi sua nota na recuperacao?\n";
cin>>nr;
mf=(n+nr)/2;
if (mf>=5) cout<<"Media final pos recuperacao: "<<mf<<endl<<"Aprovado pos recuperacao";
else cout<<"Media final pos recuperacao: "<<mf<<endl<<"Reprovado";
}
else cout<<"Reprovado";

return 0;
}