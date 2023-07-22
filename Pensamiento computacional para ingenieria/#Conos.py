#Conos
#Erick Segura Sánchez

import math as m

def AB(r,a,g):
    ab=m.pi*r**2
    return ab

def AL(r,a,g):
    al=m.pi*r*g
    return al    

def AT(r,a,g):
    ab=m.pi*r**2
    al=m.pi*r*g
    at=ab+al
    return at

def VOL(r,a,g):
    ab=m.pi*r**2
    vol = (1/3) * ab * a
    return vol


def main():
    rad=float(input('Escribe tu valor de radio: '))
    alt=float(input('Escribe tu valor de altura: '))
    gen=float(input('Escribe tu valor de generatriz: '))

    print('Menú de Selección')
    print('+------------------------------------------------+-------------------------------------------------+\n |Opción                                          |Selección                                        |\n +------------------------------------------------+-------------------------------------------------+\n |Área de la Base                                 |1                                                |\n +------------------------------------------------+-------------------------------------------------+\n |Área Lateral                                    |2                                                |\n +------------------------------------------------+-------------------------------------------------+\n |Área Total                                      |3                                                |\n +------------------------------------------------+-------------------------------------------------+\n |Volumen                                         |4                                                |\n +------------------------------------------------+-------------------------------------------------+')

    select=int(input('Escribe el número de tu selección: '))

    if select==1:
        res=AB(rad,alt,gen)
        print(f'El área de tu base es {res:.2f}')

    elif select==2:
        res=AL(rad,alt,gen)
        print(f'El área de tu lado es {res:.2f}')

    elif select==3:
        res=AT(rad,alt,gen)
        print(f'Tu área total es {res:.2f}')

    elif select==4:
        res=VOL(rad,alt,gen)
        print(f'Tu volumen es {res:.2f}')            

    else:
        print('Escribe un valor dentro del rango')
        main()        

main()