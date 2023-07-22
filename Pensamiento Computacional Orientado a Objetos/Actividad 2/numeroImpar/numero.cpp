//
// Created by conta on 15/11/2022.
//

#include "numero.h"
#include <iostream>
using namespace std;

numero::numero() {
    num=0;
}

void numero::setNum() {
    while (true) {
        cout<<"Escribe un numero impar";
        cin>>num;
            if (num%2==0) {
                cout<<"Tu numero no es impar";
            } else {
                cout<<"Tu numero es impar"

            }
    }

}

