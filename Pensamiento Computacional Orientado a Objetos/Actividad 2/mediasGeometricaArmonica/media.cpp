//
// Created by conta on 01/12/2022.
//

#include "media.h"
#include <iostream>
#include <math.h>
using namespace std;

media::media() {
    x=0;
    n=0;
    accGeo=1;
    accArm=0;
    mArm=0;
    mGeo=0;
}

void media::pedirVal() {

    while (true) {
        cout<<"Escribe tu valor (para detener escribe 0): "<<endl;
        cin>>x;
        if (x==0){
            calcGeo();
            calcArm();
            break;

        } else{
            n=n+1;
            accArm=accArm+(1/x);
            accGeo=accGeo*x;
        }
    }
}

void media::calcGeo() {
    mGeo= powf(accGeo,(1/n));
    cout<<"Tu media geometrica es: "<<mGeo<<endl;
}

void media::calcArm() {
    mArm=n/accArm;
    cout<<"Tu media armonica es: "<<mArm<<endl;
}


media::~media() {

}