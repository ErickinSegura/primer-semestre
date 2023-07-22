#include <iostream>
#include <cmath>

using namespace std;
int main(){
    system ("color 0A" );
    float altura, peso, imc;

    cout<<"Escribe tu altura en metros: ";
    cin>>altura;
    cout<<"Escribe tu peso en kg: ";
    cin>>peso;

    imc=peso/(pow(altura,2));

    cout<<"Tu IMC es "<<imc;


    return 0;
}

