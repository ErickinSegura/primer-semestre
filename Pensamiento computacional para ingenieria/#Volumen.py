#Volumen
#Erick Segura Sánchez 

import math as m

#Inputs

rad=float(input('Escribe el radio de tu esfera '))

#Operaciones

area=4*m.pi*pow(rad, 2)
vol=(4*m.pi*pow(rad, 3))/3

#Outputs
print(f'El área es {area} y el volumen es de {vol}')