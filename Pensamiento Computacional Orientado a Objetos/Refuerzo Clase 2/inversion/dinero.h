//
// Created by conta on 15/11/2022.
//

#ifndef INVERSION_DINERO_H
#define INVERSION_DINERO_H


class dinero {

private:
    float P,R,N;
public:
    dinero();

    void setP();
    void getP();

    void setR();
    void getR();

    void setN();
    void getN();

    float calcInv();
    void impRes(float inv);

    ~dinero();

};


#endif //INVERSION_DINERO_H
