//
// Created by conta on 28/11/2022.
//

#include "arreglo.h"
#include <iostream>
using namespace std;

 arreglo::arreglo() {
     iArreglo[25];
     srand((unsigned) time(NULL));
}

void arreglo::llenarArreglo() {
    for (int i = 0; i < 25; ++i) {
        iArreglo[i]=(rand()%500);
        cout<<iArreglo[i]<<"\n";
    }
}

void arreglo::leerArreglo() {
    int maxi=0;
    for (int i = 0; i < 25; ++i) {
        if (iArreglo[0] < iArreglo[i]) {
            iArreglo[0] = iArreglo[i];
            maxi = i+1;
        }
    }
    cout<<"Tu valor mas grande es: "<<iArreglo[0]<<", y esta en la posicion: "<<maxi;
}

arreglo::~arreglo() {

 }
