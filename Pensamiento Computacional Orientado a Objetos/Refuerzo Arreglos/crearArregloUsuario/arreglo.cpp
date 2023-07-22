//
// Created by conta on 28/11/2022.
//

#include "arreglo.h"
#include <iostream>
using namespace std;

 arreglo::arreglo() {
     iArreglo[50];
     acc=0;
}

void arreglo::llenarArreglo() {
     int val;
    for (int i = 0; i < 10; ++i) {
        cout<<"Escribe el valor "<<i<<" para tu arreglo: ";
        cin>>val;
        iArreglo[i]=val;
        acc+=val;
    }
}

void arreglo::leerArreglo() {
    for (int i = 0; i < 10; ++i) {
        cout<<iArreglo[i]<<"\n";
    }
    cout<<"Tu suma total fue: "<<acc;
}
arreglo::~arreglo() {

 }
