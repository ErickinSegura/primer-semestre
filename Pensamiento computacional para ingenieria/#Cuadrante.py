#Cuadrante
#Erick Segura Sánchez

#Input

num=int(input('Escribe tu número '))

fn=(num/4)

#Logica

if num > 360 or num < 0:
    print('Fuera de Rango')
else:    
    if num == 90 or num == 180 or num == 270 or num == 360 or num == 0:
        print('Eje')
    elif fn >= 0 and fn < 22.5:
        print('Primer Cuadrante')   
    elif fn > 22.5 and fn < 45:
        print('Segundo Cuadrante')
    elif fn > 45 and fn < 67.5:
        print('Tercer Cuadrante')
    else:
        print('Cuarto Cuadrante')           
          
