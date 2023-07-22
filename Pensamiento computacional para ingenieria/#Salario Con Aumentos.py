#Salarios con Aumentos
#Erick Segura Sánchez

niv=int(input('Selecciona tu nivel educativo\nNivel 1\nNivel 2\nNivel 3\nNivel 4\nTu Seleccion: '))
sal=float(input('Escribe tu salario: '))

if niv == 1:
    au=sal*0.035
    sal=sal+au
    print(f'Tu nivel es {niv} y tu nuevo salario es {sal}')
elif niv== 2:
    au=sal*0.041
    sal=sal+au
    print(f'Tu nivel es {niv} y tu nuevo salario es {sal}')    
elif niv== 3:
    au=sal*0.048
    sal=sal+au
    print(f'Tu nivel es {niv} y tu nuevo salario es {sal}')
elif niv== 4:
    au=sal*0.053
    sal=sal+au
    print(f'Tu nivel es {niv} y tu nuevo salario es {sal}')
else:
    print('Seleccion fuera de rango') 

