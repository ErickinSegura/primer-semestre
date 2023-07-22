#include <iostream>

using namespace std;
int main(){
    system ("color 0A" );
    float preini, prefin, porcen;

    cout<<"Escribe tu precio base: ";
    cin>>preini;
    cout<<"Escribe tu porcentaje de IVA: ";
    cin>>porcen;
    prefin=preini*(porcen/100)+preini;

    cout<<"Tu precio final es: "<<prefin;


    return 0;
}

