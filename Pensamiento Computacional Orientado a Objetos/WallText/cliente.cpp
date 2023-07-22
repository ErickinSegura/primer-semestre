//
// Created by conta on 30/11/2022.
//
#include <iostream>
#include "cliente.h"
using namespace std;

cliente::cliente() {
    srand((unsigned) time(NULL));
    nombre="";
    direccion="";
    idPedido=rand()%100000;
}


void cliente::setNombre(std::string n) {
    nombre=n;
}

void cliente::setDirec(std::string d) {
    direccion=d;
}

void cliente::setIDP(int IDP) {
    idPedido=IDP;
}

string cliente::getNombre() {
    return nombre;
}

string cliente::getDirec() {
    return direccion;
}

int cliente::getIDP() {
    return idPedido;
}

void cliente::genCliente() {


}


cliente::~cliente() {

}