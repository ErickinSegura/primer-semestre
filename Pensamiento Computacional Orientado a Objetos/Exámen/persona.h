//
// Created by conta on 25/11/2022.
//

#ifndef EXAMEN_PERSONA_H
#define EXAMEN_PERSONA_H


class persona { //Clase

//Encapsulamiento
private: //Accesibilidad
    //Abstraccion
    int edad, gen;
    float peso, altura, factAct, cantCal;
public: //Accesibilidad
    persona(); //Constructor


    //Métodos Modificadores
    void setEdad();

    void setGen();

    void setPeso();

    void setAltura();

    void setFAct();


    //Metodos Accesores
    void getEdad();

    void getGen();

    void getPeso();

    void getAltura();

    void getFAct();


    //Metodos Especializados

    void welcome(); //Mensaje
    float calcCal();
    void impRes(float cal);

    ~persona(); //Destructor
};


#endif //EXAMEN_PERSONA_H
