#include <iostream>
#include "menu.h"
#include "stock.h"
#include "producto.h"
#include "carrito.h"
#include "cliente.h"

int main() {
    cliente c[1];
    producto p[10];
    carrito lc[10];
    stock s;
    menu m;

    s.genStock(p);
    m.showMenu(p,lc,c);

    return 0;
}
