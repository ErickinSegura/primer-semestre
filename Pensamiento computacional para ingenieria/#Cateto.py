#Cateto
#Erick Segura Sánchez 

import math as m

#Inputs
hip=float(input('Escribe el valor de tu hipotenusa '))

#Operaciones

ang=m.radians(30)
cato=m.sin(ang)*hip

#Outputs

print(f'Tu cateto opuesto es {cato}')