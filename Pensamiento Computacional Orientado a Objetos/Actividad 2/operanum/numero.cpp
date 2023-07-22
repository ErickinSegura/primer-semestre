//
// Created by conta on 15/11/2022.
//

#include "numero.h"
#include <stdio.h>
#include <iostream>
using namespace std;

numero::numero() {
    n1=0;
    n2=0;
}

float numero::setN1() {
    cout<<"Escribe tu primer numero: ";
    cin>>n1;
}

float numero::setN2() {
    cout<<"Escribe tu segundo numero: ";
    cin>>n2;
}

float numero::calcSum() {
    float res;
    res=n1+n2;
    return res;
}

float numero::calcRes() {
    float res;
    res=n1-n2;
    return res;
}

float numero::calcMult() {
    float res;
    res=n1*n2;
    return res;
}

float numero::menu() {
    float res;
    int sele;
    cout<<"Escribe 1 para sumar, 2 para restar y 3 para multiplicar: ";
    cin>>sele;

    switch (sele) {
        case 1:
            res=calcSum();
            break;
        case 2:
            res=calcRes();
            break;
        case 3:
            res=calcMult();
            break;
        default: cout<<"No seleccionaste ninguna opcion";
    }
    return res;
}

void numero::impRes(float res) {
    cout<<"Tu resultado es "<<res;
}

numero::~numero() {

}
