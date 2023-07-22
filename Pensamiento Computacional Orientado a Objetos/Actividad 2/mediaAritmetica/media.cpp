//
// Created by conta on 24/11/2022.
//

#include "media.h"
#include <iostream>
using namespace std;

media::media() {
    cant=0;
    suma=0;
    num=0;
    medi=0;
}

int media::cantNum() {
    cout<<"Cuantos numeros quieres introducir?";
    cin>>cant;
    return cant;
}
float media::calcMedia(int c) {
    float suma, num, medi;
    for (int i=0;c>i; i++) {
        cout<<"Introduce tu numero "<<i+1<<":";
        cin>>num;
        suma=suma+num;
    }
    medi=suma/c;
    return medi;

}

void media::impMedia(float media) {
    cout<<"Tu media es "<<media;
}

media::~media() {

}