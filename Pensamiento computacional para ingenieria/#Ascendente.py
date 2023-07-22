#Ascendente
#Erick Segura Sánchez


#Input

n1 = int(input('Escribe el primer numero: '))
n2 = int(input('Escribe el segundo numero: '))
n3 = int(input('Escribe el tercer numero: '))


if n1>n2 and n1>n3:
    print (f'{n1}')
    if n2>n3:
        print (f'{n2}')
        print (f'{n3}') 
    else:
        print (f'{n3}')
        print (f'{n2}')     
elif n2>n1 and n2>n3:
    print (f'{n2}')
    if n1>n3:
        print (f'{n1}')
        print (f'{n3}') 
    else:
        print (f'{n3}')
        print (f'{n1}')   
else:
    print (f'{n3}')
    if n1>n2:
        print (f'{n1}')
        print (f'{n2}') 
    else:
        print (f'{n2}')
        print (f'{n1}')                     