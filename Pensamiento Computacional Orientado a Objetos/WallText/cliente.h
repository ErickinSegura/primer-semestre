//
// Created by conta on 30/11/2022.
//

#ifndef WALLTEXT_CLIENTE_H
#define WALLTEXT_CLIENTE_H
#include <iostream>
using namespace std;



class cliente {
private:
    string nombre, direccion;
    int idPedido;
public:
    cliente();

    void setNombre(string n);
    string getNombre();

    void setDirec(string d);
    string getDirec();

    void setIDP(int IDP);
    int getIDP();

    void genCliente();
    ~cliente();
};


#endif //WALLTEXT_CLIENTE_H
