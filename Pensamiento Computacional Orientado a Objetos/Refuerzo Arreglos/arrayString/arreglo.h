//
// Created by conta on 29/11/2022.
//

#ifndef ARRAYSTRING_ARREGLO_H
#define ARRAYSTRING_ARREGLO_H
#include <iostream>


class arreglo {
private:
    std::string frase;
    int longitud;
public:
    arreglo();
    void setLongitud();
    void impCaract();
    ~arreglo();
};


#endif //ARRAYSTRING_ARREGLO_H
