#Quiz de Programación
#Erick Segura Sánchez

import math as m

#Inputs

x1=float(input('Escribe el valor de x1 '))
y1=float(input('Escribe el valor de y1 '))
x2=float(input('Escribe el valor de x2 '))
y2=float(input('Escribe el valor de y2 '))
x3=float(input('Escribe el valor de x3 '))
y3=float(input('Escribe el valor de y3 '))

#Operaciones

p1=m.sqrt((x1-x2)**2+(y1-y2)**2)
p2=m.sqrt((x2-x3)**2+(y2-y3)**2)
p3=m.sqrt((x3-x1)**2+(y3-y1)**2)

per = p1+p2+p3

#Output

print(f'El perímetro es {per:.3f}')