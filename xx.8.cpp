#include <iostream>
#include <cmath>
using namespace std;

int main(){
float x;
cout<<"Digite um valor\n";
cin>>x;
if (x<100) {
    x=x*1.1;
    cout<<"Valor inflacionado: "<<x;
} else {
    x=x*1.2;
    cout<<"Valor inflacionado: "<<x;
}
return 0;
}