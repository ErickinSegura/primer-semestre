//
// Created by conta on 11/11/2022.
//

#include "ecuacion.h"
#include <iostream>
#include <math.h>
using namespace std;

ecuacion::ecuacion() {
    A=0;
    B=0;
    C=0;
}

void ecuacion::setA() {
    cout<<"Escribe tu valor de A: ";
    cin>>A;
}

void ecuacion::setB() {
    cout<<"Escribe tu valor de B: ";
    cin>>B;
}

void ecuacion::setC() {
    cout<<"Escribe tu valor de C: ";
    cin>>C;
}

float ecuacion::calcDet() {
    float det= sqrt(pow(B,2)-4*A*C);
    if (det < 0) {
        return det;
    } else {
        cout<<"Tu ecuacion no tiene raices";
        exit(0);
    }
}

float ecuacion::calcRes1(float det) {

    float res1=((-B)+det)/(2*A);

    return res1;
}

float ecuacion::calcRes2(float det) {

    float res2=((-B)-det)/(2*A);
    return res2;
}



void ecuacion::impRes(float res1, float res2) {
    cout<<"La primera raiz es "<<res1;
    cout<<"\nLa segunda raiz es "<<res2;
}

ecuacion::~ecuacion() {

}