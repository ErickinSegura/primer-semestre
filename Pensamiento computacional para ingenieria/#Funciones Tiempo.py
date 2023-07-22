#Funciones Tiempo
#Erick Segura Sánchez

def equivalente(h,m,s):
    tie = h*3600 + m*60 + s
    return tie

def main():
    hr = int(input('Horas: '))
    mi = int(input('Minutos: '))
    se = int(input('Segundos: '))
    proceso = equivalente(hr,mi,se)
    print(proceso)
main()
