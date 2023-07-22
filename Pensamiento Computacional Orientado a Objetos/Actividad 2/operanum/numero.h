//
// Created by conta on 15/11/2022.
//

#ifndef OPERANUM_NUMERO_H
#define OPERANUM_NUMERO_H


class numero {
private:
    float n1,n2;

public:
    numero();

    float setN1();
    float setN2();

    float menu();

    float calcSum();
    float calcRes();
    float calcMult();

    void impRes(float res);

    ~numero();

};


#endif //OPERANUM_NUMERO_H
