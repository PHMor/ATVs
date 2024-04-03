#include <iostream>
using namespace std;

int main(){

int x,m,r;
for (x = 1; x <=9; x++){
    cout<<"___________\nTabuada do "<<x<<endl;
    for (m = 0; m <= 10; m++)
    {
        r= x*m;
        cout<<x<<"*"<<m<<"="<<r<<endl;
    }
}
return 0;
}