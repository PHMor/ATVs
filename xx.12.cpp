#include <iostream>
#include <cmath>
using namespace std;

int main(){
int x,x2,r;
cout<<"Escreva dois numero separados por um espaco:(ex: '1 2')\n";
cin>>x>>x2;
r=x2%x;
if (r==0) cout<<"Sao multiplos";
else cout<<"Nao sao multiplos";
return 0;
}