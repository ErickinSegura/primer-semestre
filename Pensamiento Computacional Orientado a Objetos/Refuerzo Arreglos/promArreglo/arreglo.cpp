//
// Created by conta on 28/11/2022.
//

#include "arreglo.h"
#include <iostream>
using namespace std;

 arreglo::arreglo() {
     iArreglo[50];
     srand((unsigned) time(NULL));
}

void arreglo::llenarArreglo() {
    for (int i = 0; i < 50; ++i) {
        iArreglo[i]=(rand()%200);
        cout<<iArreglo[i]<<"\n";
    }
}

void arreglo::leerArreglo() {
    float sum, prom;
    for (int i = 0; i < 50; ++i) {
        sum=sum+iArreglo[i];
    }

    prom=sum/50;

    cout<<"Tu promedio es:"<<sum<<endl;
    cout<<"Tu promedio es:"<<prom;
}

arreglo::~arreglo() {

 }
