#include <iostream>
#include "dinero.h"

int main() {
    float inv;
    dinero d;

    d.setP();
    d.setN();
    d.setR();

    inv=d.calcInv();
    d.impRes(inv);

    return 0;
}
