#include <iostream>
#include <string>

using namespace std;
int main(){
    system ("color 0A" );
    string nombre;
    float cal1, cal2, cal3, prom;

    cout<<"Escribe el nombre del alumno: ";
    cin>>nombre;

    cout<<"Escribe la primera calificacion: ";
    cin>>cal1;
    cout<<"Escribe la segunda calificacion: ";
    cin>>cal2;
    cout<<"Escribe la tercera calificacion: ";
    cin>>cal3;

    prom=(cal1+cal2+cal3)/3;

    cout<<"El promedio de "<<nombre<<" es "<<prom;

    return 0;
}

