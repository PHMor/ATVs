#include <iostream>
using namespace std;

int main(){
int x,x2;
cout<<"Digite dois numeros separados por um espaco: (ex: 2 3)\n";
cin>>x>>x2;
if (x>x2) {
    cout<<x+x2;
} else {
    cout<<x*x2;
}
return 0;
}