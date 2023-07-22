#Areas
#Erick Segura Sánchez 

import math as m


#Inputs

a=float(input('Escribe el valor de a: '))
b=float(input('Escribe el valor de b: '))
c=float(input('Escribe el valor de c: '))


#Operaciones

s=(a+b+c)/2
area = m.sqrt(s*(s-a)*(s-b)*(s-c))   

#Outputs

print(f'El área del triangulo es {area}')