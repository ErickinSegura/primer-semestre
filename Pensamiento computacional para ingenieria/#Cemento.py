#Cemento
#Erick Segura Sánchez 

#Inputs


nblt=int(input('Introduce los bultos de cemento por comprar '))
pblt=float(input('Escribe el precio por bulto de cemento '))

#Operaciones

pre1=pblt*nblt
iva=pre1*0.16
pre2=pre1+iva

#Outputs

print(f'El precio inicial es de {pre1}')
print(f'Los impuestos son {iva}')
print(f'El precio final es de {pre2}')