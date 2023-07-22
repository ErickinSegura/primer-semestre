#Listas
#Erick Segura Sánchez 

lista=[]
num=int(input('Escribe cuantos valores quieres ingresar '))
while True:
    if num >= 0:
        break
    num=int(input('Escribe cuantos valores quieres ingresar '))

for i in range(num):
    dato = int(input())
    lista.append(dato)

for j in range(-1, -num-1,-1):
    print('lista['+str(j)+']='+str(lista[j]))
