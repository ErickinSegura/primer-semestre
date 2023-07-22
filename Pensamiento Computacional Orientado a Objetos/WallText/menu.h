//
// Created by conta on 30/11/2022.
//

#ifndef WALLTEXT_MENU_H
#define WALLTEXT_MENU_H

#include "cliente.h"
#include "producto.h"
#include "carrito.h"

class menu {
public:
    menu();

    void secTienda(producto p[10], carrito lc[10], cliente c[1]);
    void secCarrito(producto p[10], carrito lc[10], cliente c[1]);
    void secComprar(producto p[10],  carrito lc[10], cliente c[1]);
    void finCompra(carrito lc[10], cliente c[1]);

    void showMenu(producto p[10],carrito lc[0],cliente c[1]);


    ~menu();

    void secTienda();
};


#endif //WALLTEXT_MENU_H
