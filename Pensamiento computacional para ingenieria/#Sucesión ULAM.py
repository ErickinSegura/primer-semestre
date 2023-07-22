#Sucesión ULAM
#Erick Segura Sánchez

acc=int(input('Escribe el numero con el que quieras iniciar '))
sum=0

while acc !=1:
    print(int(acc))
    if acc % 2 == 0:
        acc/=2
    else:
        acc=(acc*3)+1
print('1')