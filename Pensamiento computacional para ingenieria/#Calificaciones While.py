#Calificaciones While
#Erick Segura Sánchez

check = str
prom=0
tot=0

check=str(input('Para iniciar presiona la tecla s '))

while check == "s" or check == "S":
    for i in range (1,6):
        cal=int(input(f'Escribe la calificacion {i}: '))
        tot+=cal
    prom=tot/5
    print(prom)
    check=str(input('Para continuar con otro alumno presiona S: '))

