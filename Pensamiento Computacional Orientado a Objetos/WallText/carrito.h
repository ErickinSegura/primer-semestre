//
// Created by conta on 30/11/2022.
//

#ifndef WALLTEXT_CARRITO_H
#define WALLTEXT_CARRITO_H

#include "producto.h"

class carrito {
private:
    int cantidad, ID;
    std::string desc;
    float precio;
public:
    carrito();

    int getCantidad();
    void setCantidad(int c);

    int getID();
    void setID(int i);

    std::string getDesc();
    void setDesc(std::string d);

    float getPrecio();
    void setPrecio(float pr);


    void addItem(producto p[10], carrito lc[0]);

    ~carrito();
};


#endif //WALLTEXT_CARRITO_H
