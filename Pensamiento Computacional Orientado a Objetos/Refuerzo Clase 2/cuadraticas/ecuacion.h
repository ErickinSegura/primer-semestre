//
// Created by conta on 11/11/2022.
//

#ifndef CUADRATICAS_ECUACION_H
#define CUADRATICAS_ECUACION_H


class ecuacion {
private:
float A,B,C;

public:
    ecuacion(); //Constructor

    void setA();
    void setB();
    void setC();

    float calcDet();
    float calcRes1(float det);
    float calcRes2(float det);
    void impRes(float res1, float res2);


    ~ecuacion();

};


#endif //CUADRATICAS_ECUACION_H
