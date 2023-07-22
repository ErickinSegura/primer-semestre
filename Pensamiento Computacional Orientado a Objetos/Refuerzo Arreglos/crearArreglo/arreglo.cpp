//
// Created by conta on 28/11/2022.
//

#include "arreglo.h"
#include <iostream>
using namespace std;

 arreglo::arreglo() {
     for (int i = 0; i < 10; ++i) {
         iArreglo[i]=i;
     }
}

void arreglo::leerArreglo() {
    for (int i = 0; i < 10; ++i) {
        cout<<iArreglo[i]<<"\n";
    }
}
arreglo::~arreglo() {

 }
