//
// Created by conta on 01/12/2022.
//

#include "stock.h"
#include "producto.h"



stock::stock() {
}

void stock::genStock(producto p[10]) {
    p[0].setID(1);
    p[0].setDesc("Parachutes - Coldplay");
    p[0].setPrecio(1402);

    p[1].setID(2);
    p[1].setDesc("A Rush of Blood to the Head - Coldplay");
    p[1].setPrecio(734);

    p[2].setID(3);
    p[2].setDesc("X&Y - Coldplay");
    p[2].setPrecio(1160);

    p[3].setID(4);
    p[3].setDesc("Viva la Vida - Coldplay");
    p[3].setPrecio(842);

    p[4].setID(5);
    p[4].setDesc("Mylo Xyloto - Coldplay");
    p[4].setPrecio(749);

    p[5].setID(6);
    p[5].setDesc("Ghost Stories - Coldplay");
    p[5].setPrecio(926);

    p[6].setID(7);
    p[6].setDesc("A Head Full of Dreams - Coldplay");
    p[6].setPrecio(892);

    p[7].setID(8);
    p[7].setDesc("Everyday Life - Coldplay");
    p[7].setPrecio(1149);

    p[8].setID(9);
    p[8].setDesc("Music of the Spheres - Coldplay");
    p[8].setPrecio(776);

    p[8].setID(10);
    p[8].setDesc("Random Vibes EP - YoungTizaa");
    p[8].setPrecio(500);
}

stock::~stock() {

}
