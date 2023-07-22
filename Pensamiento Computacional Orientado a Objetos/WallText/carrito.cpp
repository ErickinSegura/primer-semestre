//
// Created by conta on 30/11/2022.
//

#include "carrito.h"
#include "menu.h"
#include "producto.h"

#include <iostream>
using namespace std;



carrito::carrito() {
    cantidad=0;
    desc="";
}

void carrito::setCantidad(int c) {
    cantidad=c;
}

int carrito::getCantidad() {
    return cantidad;
}

void carrito::setID(int i) {
    ID=i;
}

int carrito::getID() {
    return ID;
}

void carrito::setDesc(std::string d) {
    desc=d;
}

string carrito::getDesc() {
    return desc;
}

void carrito::setPrecio(float pr) {
    precio=pr;
}

float carrito::getPrecio() {
    return precio;
}


carrito::~carrito() {

}
