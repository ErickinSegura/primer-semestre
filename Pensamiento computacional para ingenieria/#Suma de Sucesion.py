#Suma de Sucesion (nidea cual sea)
#Erick Segura Sánchez

acc=2
sum=0

while acc < 2500:
    if acc % 2 == 0:
        print(acc)
        sum+=acc
        acc+=5
    else:
        print(acc)
        sum+=acc
        acc+=3
print(f'La suma es {sum}')

