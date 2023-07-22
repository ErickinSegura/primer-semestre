#include <iostream>
#include <cmath>

using namespace std;
int main(){
    system ("color 0A" );
    double x1,y1,x2,y2,distancia,res1,res2;

    cout<<"Escribe el valor del punto x1: ";
    cin>>x1;
    cout<<"Escribe el valor del punto y1: ";
    cin>>y1;
    cout<<"Escribe el valor del punto x2: ";
    cin>>x2;
    cout<<"Escribe el valor del punto y2: ";
    cin>>y2;

    distancia= sqrt(pow((x2-x1),2)+ pow((y2-y1),2));

    cout<<"La distancia entre los puntos es "<<distancia;

    return 0;
}

