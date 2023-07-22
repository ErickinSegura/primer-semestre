#Generador de Ecuaciones
#Erick Segura Sánchez

import math as m
from random import random, uniform

def generate():
    while True:
        a=int(uniform(1,25))
        b=int(uniform(1,25))
        c=int(uniform(1,25))
        deter=b**2-4*a*c
        if deter>0:
            break
        else:
            print('no')

    print('Esta es tu ecuación, calcula sus raíces (Redondea al número inferior)')            
    print(f'{a}x2+{b}x+{c}')
    return a,b,c

def solucion(a,b,c):
    intento=0
    resul1=int((-b+m.sqrt(b**2-4*a*c))/(2*a))
    resul2=int((-b-m.sqrt(b**2-4*a*c))/(2*a))
    while True:
        r1=int(input('Escribe la primera raíz '))
        r2=int(input('Escribe la segunda raíz '))
        if r1==resul1 or r1==resul2 and r2==resul1 or r2==resul2:
            print('Bien hecho')
            break
        else:
            print('Incorrecto')
            intento+=1
            if intento == 2:
                print('Llegaste al limite de intentos')
                break        


a,b,c=generate()
solucion(a,b,c)


