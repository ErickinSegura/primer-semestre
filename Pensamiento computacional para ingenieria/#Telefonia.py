#Telefonia
#Erick Segura Sánchez 


#Inputs

from cmath import cos


mes=int(input('Escribe los mensajes enviados este mes '))
meg=float(input('Escribe los megas consumidos este mes '))
min=int(input('Escribe los minutos usados este mes '))

#Operaciones

mesf=mes*0.80
megf=meg*0.80
minf=min*0.80

cost=mesf+megf+minf

#Outputs

print(f'Tu saldo a pagar este mes es de {cost}')