#include <iostream>
#include <cmath>

using namespace std;
int main(){
    system ("color 0A" );
    int cel, far;

    cout<<"Escribe tu temperatura en celsius: ";
    cin>>cel;

    far=(9/5*cel)+32;

    cout<<cel<<" grados Celsius equivalen a "<<far<<" grados Fahrenheit";


    return 0;
}

