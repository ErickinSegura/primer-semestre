//
// Created by conta on 29/11/2022.
//

#include "arreglo.h"
#include <iostream>
using namespace std;

arreglo::arreglo() {
    frase="Pensamiento computacional orientado a objetos";
    longitud=0;
}

void arreglo::setLongitud() {
    longitud=frase.size();
    cout<<"La longitudad del arreglo es: "<<longitud;
}

void arreglo::impCaract() {
    for (int i=0; i<longitud;i++) {
        cout<<"Tu caracter "<<i+1<<" es "<<frase[i]<<endl;
    }
}

arreglo::~arreglo() {}