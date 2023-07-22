#include <iostream>
#include <cmath>

using namespace std;
int main(){
    system ("color 0A" );
    string nombre;
    float cat1, cat2, hip;
    while (true) {
      cout<<"Escribe tu primer cateto: ";
      cin>>cat1;
      cout<<"Escribe tu segundo cateto: ";
      cin>>cat2;
        if (cat1==0 or cat2==0) {
            cout<<"Ningun cateto puede ser 0, vuelve a introducir los valores\n\n";
        } else {
            break;
        }
    }

    hip= sqrt(pow(cat1,2)+ pow(cat2,2));

    cout<<"La hipotenusa es "<<hip;


    return 0;
}

