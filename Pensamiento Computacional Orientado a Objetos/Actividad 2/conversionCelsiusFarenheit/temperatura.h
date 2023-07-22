//
// Created by conta on 24/11/2022.
//

#ifndef CONVERSIONCELSIUSFARENHEIT_TEMPERATURA_H
#define CONVERSIONCELSIUSFARENHEIT_TEMPERATURA_H


class temperatura {

private:
    int nConv;
    float tempCel, tempFaren, tempIncre;
public:
    temperatura();

    void setTempCel();

    void numConver();

    void totIncre();

    void fConver();

    ~temperatura();
};


#endif //CONVERSIONCELSIUSFARENHEIT_TEMPERATURA_H
