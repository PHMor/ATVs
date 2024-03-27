#include <iostream>
using namespace std;
int main() {
float prc,prc_infl;
cout<<"Qual o preco do produto?\n";
cin>>prc;
if (prc<100) {
prc_infl=prc*1.1;
}
if (prc>=100) {
prc_infl=prc*1.2;
}
cout<<"O preco inflacionado eh: "<<prc_infl;
}