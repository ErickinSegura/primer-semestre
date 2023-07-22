#Calificaciones
#Erick Segura Sánchez

select=str(input('Escribe Y para iniciar a introducir calificaciones: '))

r1 = 0
r2 = 0
r3 = 0
r4 = 0
r5 = 0

while select == 'Y' or select == 'y':
    cal=float(input(f'Escribe la calificacion '))

    if cal >= 0 and cal <= 3.99:
        r1+=1
    elif cal >= 4 and cal <= 5.99:
        r2+=1
    elif cal >= 6 and cal <= 7.99:
        r3+=1
    elif cal >= 8 and cal <= 8.99:
        r4+=1
    elif cal >= 9 and cal <= 10:
        r5+=1         

    select=str(input('Para introducir nueva calificacion escribe Y, para terminar pulsa cualquier otra tecla:\n'))

print(f'En el rango de 0 a 3.99 hay {r1} calificaciones')
print(f'En el rango de 4 a 5.99 hay {r2} calificaciones')
print(f'En el rango de 6 a 7.99 hay {r3} calificaciones')           
print(f'En el rango de 8 a 8.99 hay {r4} calificaciones')
print(f'En el rango de 9 a 10 hay {r5} calificaciones')


    
    