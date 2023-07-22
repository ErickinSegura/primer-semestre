#include <iostream>

using namespace std;
int main(){
    system ("color 0A" );
    double num1, num2, aux;

    cout<<"Escribe el primer numero: ";
    cin>>num1;
    cout<<"Escribe el segundo numero: ";
    cin>>num2;

    aux=num1;
    num1=num2;
    num2=aux;

    cout<<"Numero 1: "<<num1<<"\nNumero 2: "<<num2;

    return 0;
}

