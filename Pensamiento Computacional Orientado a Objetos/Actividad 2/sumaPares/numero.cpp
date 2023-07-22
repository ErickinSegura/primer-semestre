//
// Created by conta on 15/11/2022.
//

#include "numero.h"
#include <iostream>
using namespace std;

numero::numero() {
    acc=0;
}

int numero::calcSum() {
    for (int i=0; i <= 100; i++){
        if (i%2==0){
            acc=acc+i;
        }
    }
    return acc;
}

void numero::printNums(int acc) {
    cout<<"La suma de los numeros pares es "<<acc;
}

