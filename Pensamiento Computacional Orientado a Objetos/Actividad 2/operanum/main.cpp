#include <iostream>
#include "numero.h"

int main() {
    float res;
    numero n;

    n.setN1();
    n.setN2();

    res=n.menu();

    n.impRes(res);


    return 0;
}
