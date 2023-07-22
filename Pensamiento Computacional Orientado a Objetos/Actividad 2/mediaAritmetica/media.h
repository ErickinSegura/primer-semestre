//
// Created by conta on 24/11/2022.
//

#ifndef MEDIAARITMETICA_MEDIA_H
#define MEDIAARITMETICA_MEDIA_H


class media {
private:
    int cant;
    float suma, num, medi;

public:
    media();
    int cantNum();
    int pedirNum();
    float calcMedia(int c);
    void impMedia(float media);


    ~media();

};


#endif //MEDIAARITMETICA_MEDIA_H
