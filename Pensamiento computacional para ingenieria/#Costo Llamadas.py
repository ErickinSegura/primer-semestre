#Costo Llamadas
#Erick Segura Sánchez

print('De esta tabla selecciona el código de tu zona')
print(' +--------------------------------+---------------------------------+\n |Clave                           |Zona                             |\n +--------------------------------+---------------------------------+\n |1                               |Estados Unidos                   |\n +--------------------------------+---------------------------------+\n |2                               |Canadá                           |\n +--------------------------------+---------------------------------+\n |5                               |América del Sur                  |\n +--------------------------------+---------------------------------+\n |6                               |América Central                  |\n +--------------------------------+---------------------------------+\n |7                               |México                           |\n +--------------------------------+---------------------------------+\n |9                               |Europa                           |\n +--------------------------------+---------------------------------+\n |10                              |Asia                             |\n +--------------------------------+---------------------------------+\n |15                              |África                           |\n +--------------------------------+---------------------------------+\n |20                              |Oceanía                          |\n +--------------------------------+---------------------------------+\n')

cla=int(input('Escribe tu clave de selección: '))

tie=int(input('Escribe el tiempo  en minutos que estuviste en llamada: '))

if cla == 1:
    total=tie*0.13
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 2:
    total=tie*0.11
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 5:
    total=tie*0.22
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 6:
    total=tie*0.19
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 7:
    total=tie*0.17
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 9:
    total=tie*0.17
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 10:
    total=tie*0.20
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 15:
    total=tie*0.39
    print(f'El total de tu llamada es de {total:.2f}')
elif cla == 20:
    total=tie*0.28
    print(f'El total de tu llamada es de {total:.2f}')
else:
    print('La clave es incorrecta')    


