//
// Created by conta on 15/11/2022.
//
#include <iostream>
#include "dinero.h"
#include <cmath>
using namespace std;


dinero::dinero() {
    P=0;
    N=0;
    R=0;
}

void dinero::setP() {
    cout<<"Escribe cuanto dinero invertiras: ";
    cin>>P;
}

void dinero::setN() {
    cout<<"Cuantos anios sera tu inversion : ";
    cin>>N;
}

void dinero::setR() {
    cout<<"Cuanto es tu tasa de interes: ";
    cin>>R;
}

float dinero::calcInv() {
    float inve=(P*(1- pow((R/100),N+1)))/(1-(R/100));
    return inve;
}

void dinero::impRes(float inv) {
    cout<<"Tendras una ganancia de "<<inv;
}

dinero::~dinero() {

}