//
// Created by conta on 01/12/2022.
//

#ifndef MEDIASGEOMETRICAARMONICA_MEDIA_H
#define MEDIASGEOMETRICAARMONICA_MEDIA_H


class media {
private:
    float x, mGeo, mArm, accGeo, accArm,n;
public:
    media();

    void pedirVal();

    void calcGeo();
    void calcArm();

    ~media();
};


#endif //MEDIASGEOMETRICAARMONICA_MEDIA_H
