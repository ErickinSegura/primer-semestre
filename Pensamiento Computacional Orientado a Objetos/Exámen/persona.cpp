//
// Created by conta on 25/11/2022.
//

#include "persona.h"
#include <iostream>
#include <unistd.h>
using namespace std;

persona::persona() { //Constructor
    //Atributos
    edad=0;
    gen=0;
    peso=0;
    altura=0;
    factAct=0;
    cantCal=0;
}


void persona::welcome() {
    cout<<"Bienvenidx, vamos a calcular la cantidad de calorias necesitas :)\n"<<"Inicialmente llena estos datos\n";

}


void persona::setGen() {
    cout<<"Selecciona tu sexo biologico: 1. Mujer. 2.Hombre\n";
    cin>>gen;
    if (gen!=1 and gen!=2) {
        cout<<"\n\nNo elegiste ninguna opcion disponible";
        exit(0);
    }
}

void persona::setEdad() {
    cout<<"Escribe tu edad:\n";
    cin>>edad;
}

void persona::setAltura() {
    cout<<"Escribe tu Altura en cm:\n";
    cin>>altura;
}

void persona::setPeso() {
    cout<<"Escribe tu Peso en kg:\n";
    cin>>peso;
}

void persona::setFAct() {
    int sele=0;
    cout<<"Cuanta actividad haces por semana?\nSelecciona la opcion que mas te represente";
    cout<<"+------------------------------------------------+-------------------------------------------------+\n"
          "|Seleccion                                       |Actividad                                        |\n"
          "+------------------------------------------------+-------------------------------------------------+\n"
          "|1                                               |Nada de actividad                                |\n"
          "+------------------------------------------------+-------------------------------------------------+\n"
          "|2                                               |1 a 3 por semana                                 |\n"
          "+------------------------------------------------+-------------------------------------------------+\n"
          "|3                                               |3 a 5 por semana                                 |\n"
          "+------------------------------------------------+-------------------------------------------------+\n"
          "|4                                               |6 a 7 por semana                                 |\n"
          "+------------------------------------------------+-------------------------------------------------+\n"
          "|5                                               |Atleta profesional                               |\n"
          "+------------------------------------------------+-------------------------------------------------+\n";
    cout<<"Tu seleccion:";
    cin>>sele;
    switch (sele) {
        case 1:
            factAct=1.2;
            break;
        case 2:
            factAct=1.375;
            break;
        case 3:
            factAct=1.55;
            break;
        case 4:
            factAct=1.725;
            break;
        case 5:
            factAct=1.9;
            break;
        default:
            cout<<"No seleccionaste ninguna opcion valida";
            exit(0);

    }
}



void persona::getGen() {
    return;
}

void persona::getEdad() {
    return;
}

void persona::getAltura() {
    return;
}

void persona::getPeso() {
    return;
}

void persona::getFAct() {
    return;
}

persona::~persona() {

}

float persona::calcCal() {
    cout<<"Calculando tu cantidad de calorias necesarias...";
    sleep(2);

    if (gen==1){
        cantCal=(655+(9.6*peso)+(1.8*altura)-(4.7*edad))*factAct;
        return cantCal;
    } else {
        cantCal=(66+(13.7*peso)+(5*altura)-(6.8*edad))*factAct;
        return cantCal;
    }

}

void persona::impRes(float cal) {
    cout<<"\n\nTu cantidad de calorias necesarias es:"<<cal;
}