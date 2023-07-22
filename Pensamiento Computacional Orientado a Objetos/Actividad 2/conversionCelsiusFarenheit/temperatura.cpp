//
// Created by conta on 24/11/2022.
//

#include "temperatura.h"
#include <iostream>
using namespace std;

temperatura::temperatura() {
    tempCel=0;
    tempFaren=0;
    nConv=0;
    tempIncre=0;
}

void temperatura::setTempCel() {
    cout<<"Cual es tu valor inicial en Celsius:\n";
    cin>>tempCel;
}

void temperatura::numConver() {
    cout<<"Ingresa el numero de conversiones a realizar:\n";
    cin>>nConv;
}

void temperatura::totIncre() {
    cout<<"Ingresa el incremento entre valores que tendra tu temperatura:\n";
    cin>>tempIncre;
}

void temperatura::fConver() {
    float fConvert, cIncre;
    cIncre=tempCel;
    for (int i=0;nConv>i; i++) {
        fConvert = 1.8*cIncre+32;
        cout<<"\n"<<cIncre<<" grados en Fahrenheit son: "<<fConvert;
        cIncre=cIncre+tempIncre;
    }
}

temperatura::~temperatura() {

}
