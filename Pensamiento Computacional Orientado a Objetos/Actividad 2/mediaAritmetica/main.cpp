#include <iostream>
#include "media.h"

int main() {
    media m;

    int c;
    float media;

    c=m.cantNum();
    media=m.calcMedia(c);
    m.impMedia(media);


}
