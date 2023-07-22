//
// Created by conta on 30/11/2022.
//

#ifndef WALLTEXT_PRODUCTO_H
#define WALLTEXT_PRODUCTO_H
#include <iostream>
using namespace std;


class producto {
private:
    float precio;
    int ID;
    std::string desc;
public:
    producto();

    int getID();
    float getPrecio();
    string getDesc();

    void setID(int i);
    void setPrecio(float p);
    void setDesc(string d);

    ~producto();
};


#endif //WALLTEXT_PRODUCTO_H
