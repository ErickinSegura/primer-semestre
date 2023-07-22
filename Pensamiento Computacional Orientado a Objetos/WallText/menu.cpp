//
// Created by Erick on 30/11/2022.
//
#include "menu.h"
#include "cliente.h"
#include "producto.h"
#include "carrito.h"

#include <unistd.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int j=0;

menu::menu() {

}


void menu::secTienda(producto p[10], carrito lc[10], cliente c[1]) {
    int select, cant;

    cout<<"<---------- Tienda ---------->"<<endl;
    do {
        cout<<"Selecciona una opcion"<<endl;
        for (int i=0;i<=sizeof(p);i++) {
            cout<<i+1<<". "<<p[i].getDesc()<<", $"<<p[i].getPrecio()<<endl;
        }
        cout<<"0. Salir"<<endl;
        cin>>select;
        switch (select) {
            case 1:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[0].getID());
                lc[j].setDesc(p[0].getDesc());
                lc[j].setPrecio(p[0].getPrecio());
                j++;
                break;
            case 2:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[1].getID());
                lc[j].setDesc(p[1].getDesc());
                lc[j].setPrecio(p[1].getPrecio());
                j++;
                break;
            case 3:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[2].getID());
                lc[j].setDesc(p[2].getDesc());
                lc[j].setPrecio(p[2].getPrecio());
                j++;
                break;
            case 4:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[3].getID());
                lc[j].setDesc(p[3].getDesc());
                lc[j].setPrecio(p[3].getPrecio());
                j++;
                break;
            case 5:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[4].getID());
                lc[j].setDesc(p[4].getDesc());
                lc[j].setPrecio(p[4].getPrecio());
                j++;
                break;
            case 6:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[5].getID());
                lc[j].setDesc(p[5].getDesc());
                lc[j].setPrecio(p[5].getPrecio());
                j++;
                break;
            case 7:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[6].getID());
                lc[j].setDesc(p[6].getDesc());
                lc[j].setPrecio(p[6].getPrecio());
                j++;
                break;
            case 8:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[7].getID());
                lc[j].setDesc(p[7].getDesc());
                lc[j].setPrecio(p[7].getPrecio());
                j++;
                break;
            case 9:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[8].getID());
                lc[j].setDesc(p[8].getDesc());
                lc[j].setPrecio(p[8].getPrecio());
                j++;
                break;
            case 10:
                cout<<"Cuantos deseas agregar: ";
                cin>>cant;
                lc[j].setCantidad(cant);
                lc[j].setID(p[8].getID());
                lc[j].setDesc(p[8].getDesc());
                lc[j].setPrecio(p[8].getPrecio());
                j++;
                break;
            case 0:
                showMenu(p, lc,c);
                break;
            default:
                secTienda(p,lc,c);
        }

    } while (select!=0);


}

void menu::secCarrito(producto p[10],  carrito lc[10], cliente c[1]) {

    if (lc[0].getCantidad()==0) {
        cout<<"No hay articulos en tu carrito"<<endl;
        sleep(1);
        showMenu(p, lc,c);
    }
    cout<<"<---------- Carrito ---------->"<<endl;
    for (int i=0;i<j;i++) {
        cout<<"|Nombre|"<<lc[i].getDesc()<<"|Precio|"<<lc[i].getPrecio()<<"|Cantidad|"<<lc[i].getCantidad()<<endl;
    }

    system("pause");
    showMenu(p, lc,c);

}

void menu::secComprar(producto p[10],  carrito lc[10], cliente c[1]) {
    float preTot;
    int proTot;
    int select;
    if (lc[0].getCantidad()==0) {
        cout<<"No hay articulos en tu carrito"<<endl;
        sleep(1);
        showMenu(p, lc,c);
    }
    cout<<"<---------- Comprar ---------->"<<endl;
    preTot=0;
    for (int i=0;i<=j;i++) {
        preTot=preTot+(lc[i].getPrecio()*lc[i].getCantidad());
    }

    proTot=0;
    for (int i=0;i<=j;i++) {
        proTot=proTot+lc[i].getCantidad();
    }

    if (proTot==1) {
        cout<<"Tienes: "<<proTot<<" producto en tu carrito"<<endl;
        cout<<"El subtotal es de $"<<preTot<<endl;
    }else {
        cout<<"Tienes: "<<proTot<<" productos en tu carrito"<<endl;
        cout<<"El subtotal es de $"<<preTot<<endl;
    }

    cout<<"Selecciona una opcion"<<endl;
    cout<<"1. Realizar compra"<<endl;
    cout<<"2. Volver al menu"<<endl;
    cin>>select;
    switch (select) {
        case 1:
            finCompra(lc,c);
        case 2:
            showMenu(p, lc,c);
        default:
            showMenu(p, lc,c);
    }
}

void menu::finCompra(carrito lc[10], cliente c[1]) {
    string n,d;
    cout<<"<---------- Cliente ---------->"<<endl;
    cout<<"Escribe tu nombre:"<<endl;
    cin>>n;
    c[0].setNombre(n);
    cout<<"Escribe tu direccion:"<<endl;
    cin>>d;
    c[0].setDirec(d);

    float preTot;
    preTot=0;
    for (int i=0;i<=j;i++) {
        preTot=preTot+(lc[i].getPrecio()*lc[i].getCantidad());
    }
    int proTot;
    proTot=0;
    for (int i=0;i<=j;i++) {
        proTot=proTot+lc[i].getCantidad();
    }

    cout<<"<---------- Ticket ---------->"<<endl;
    cout<<"Cliente:"<<c[0].getNombre()<<" | ID: "<<c[0].getIDP()<<endl;
    cout<<"Lista de compra"<<endl;
    for (int i=0;i<j;i++) {
        cout<<lc[i].getID()<<"|"<<lc[i].getDesc()<<"|$"<<lc[i].getPrecio()<<"|"<<lc[i].getCantidad()<<endl;
    }
    cout<<"Cantidad de productos:"<<proTot<<endl;
    cout<<"Subtotal del la compra: $"<<preTot<<endl;
    cout<<"\nEnviar a:"<<c[0].getDirec()<<endl;
    cout<<"\nGracias por tu compra"<<endl;
    cout<<"WallText"<<endl;
    system("pause");
    exit(1);


}


void menu::showMenu(producto p[10], carrito lc[10], cliente c[1]) {

        int opc=0;

        cout<<"<---------- WallText ---------->"<<endl;
        cout<<"Bienvenide a la mejor tienda de "<<endl;
        cout<<"       vinilos de Mexico.       "<<endl;
        cout<<"\nSelecciona una opcion"<<endl;
        cout<<"1. Tienda"<<endl;
        cout<<"2. Carrito"<<endl;
        cout<<"3. Comprar"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;
        switch (opc) {
            case 1:
                secTienda(p, lc,c);
                break;
            case 2:
                secCarrito(p, lc,c);
                break;
            case 3:
                secComprar(p, lc,c);
                break;
            case 4:
                exit(0);
            default:
                menu();
        }


}

menu::~menu() {

}