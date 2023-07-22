#Calcular grado
#Erick Segura Sánchez

def calc(select):
    if select > 0.9 and select <= 1:
        print('Tu score es A')

    elif select > 0.8 and select <= 0.9:
        print('Tu score es B')
    
    elif select > 0.7 and select <= 0.8:
        print('Tu score es C')

    elif select > 0.6 and select <= 0.7:
        print('Tu score es D')

    elif select <= 0.6 and select:
        print('Tu score es F')

    else:
        print('Score fuera de rango')
        main()                     

def main():
    select=float(input('Escribe tu score: '))
    res=calc(select)

main()