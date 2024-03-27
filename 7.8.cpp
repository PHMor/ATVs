#include <iostream>
using namespace std;

int main(){
    int cent,reais,sobra,n100,n50,n20,n10,n5,m1,m50,m25,m10,m5,m1c,sobram;
    cout<<"Quantos centavos voce possui?\n";
    cin>>cent;
    cout<<"Quantos reais voce possui?\n";
    cin>>reais;
    n100=reais/100;
    cout <<"Notas de 100: "<<n100;
    sobra=reais%100;
    n50=sobra/50;
    sobra=sobra%50;
    cout<<"\nNotas de 50: "<<n50;
    n20=sobra/20;
    sobra=sobra%20;
    cout<<"\nNotas de 20: "<<n20;
    n10=sobra/10;
    sobra=sobra%10;
    cout<<"\nNotas de 10: "<<n10;
    n5=sobra/5;
    sobra=sobra%5;
    cout<<"\nNotas de 5: "<<n5;
    m1=sobra+(cent/100)/1;
    cout<<"\nMoedas de 1 reais: "<<m1;

    m50=cent/50;
    cout <<"\nMoedas de 50: "<<m50;
      sobram=cent%50;
      m25=sobram/25;
      cout<<"\nMoedas de 25:"<<m25;
      sobram=sobram%25;
      m10=sobram/10;
      cout<<"\nMoedas de 10: "<<m10;
      sobram=sobram%10;
      m5=sobram/5;
      cout<<"\nMoedas de 5: "<<m5;
      sobram=sobram%5;
      m1c=sobram/1;
      cout<<"\nMoedas de 1 centavos: "<<m1c;

    return 0;
}
