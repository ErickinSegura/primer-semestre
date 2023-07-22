//
// Created by conta on 15/11/2022.
//

#include "numero.h"
#include <iostream>
#include<cstdlib>
using namespace std;



numero::numero() {
    srand((unsigned) time(NULL));
    num = rand()%101;
}

int numero::usrGuess() {
    while (true) {
        cout<<"\nIntroduce tu numero:";
        cin>>guess;
        if (guess==num) {
            cout<<"\nNumero correcto";
            exit(0);
        } else if (guess < num) {
            cout<<"\nMas";
        } else if (guess > num) {
            cout<<"\nMenos";
        }
    }
}



numero::~numero() {

}