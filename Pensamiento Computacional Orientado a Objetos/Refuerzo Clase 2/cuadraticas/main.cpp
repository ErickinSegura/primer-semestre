#include <iostream>
#include "ecuacion.h"

int main() {
    float res1,res2,det;
    ecuacion t;

    t.setA();
    t.setB();
    t.setC();

    det=t.calcDet();

    res1=t.calcRes1(det);
    res2=t.calcRes2(det);
    t.impRes(res1, res2);

    return 0;
}
