//
// Created by conta on 30/11/2022.
//

#include "producto.h"
#include <iostream>
using namespace std;

producto::producto() {
    desc="";
    precio=0;
    ID=0;
}

void producto::setPrecio(float p) {
    precio=p;
}

void producto::setDesc(string d) {
    desc=d;
}

void producto::setID(int i) {
    ID=i;
}


float producto::getPrecio() {
    return precio;
}

string producto::getDesc() {
    return desc;
}

int producto::getID() {
    return ID;
}

producto::~producto() {

}
