#include <iostream>
#include "persona.h"

int main() {

    float cal;
    persona p;
    //Nuestro objeto es persona

    p.welcome();

    p.setGen();
    p.setEdad();
    p.setAltura();
    p.setPeso();
    p.setFAct();

    cal=p.calcCal();//Instancia
    p.impRes(cal);

    return 0;
}
