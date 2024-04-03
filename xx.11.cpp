#include <iostream>
#include <cmath>
using namespace std;

int main(){
double alt;
cout<<"Digite dua altura:\n";
cin>>alt;
if (alt<1.5) cout<<"Abaixo de um metro e meio";
else if (alt>=1.5&&alt<=1.8) cout<<"Entre um metro e meio e um metro e oitenta centimentos";
else cout<<"Acima de um metro e oitenta";
return 0;
}