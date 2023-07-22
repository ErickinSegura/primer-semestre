#include <iostream>
#include <cmath>

using namespace std;
int main(){
    system ("color 0A" );
    float num1, num2, suma, mult, div,resta;

    cout<<"Introduce el primer numero: ";
    cin>>num1;
    cout<<"Introduce el segundo numero: ";
    cin>>num2;
    suma=num1+num2;
    resta=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    cout<<"\nEl resultado de la suma es: "<<suma;
    cout<<"\nEl resultado de la resta es: "<<resta;
    cout<<"\nEl resultado de la multiplicacion es: "<<mult;
    cout<<"\nEl resultado de la division es: "<<div;


    return 0;
}

