#Función que reciba una cantidad de pies (entero positivo) y devuelva el equivalente a centímetros.
#Erick Segura Sánchez

def pies(p):
    c=p*30.48
    return c

def pulgadas(p):
    c=p*2.54
    return c

def yardas(y):
    c=y*91.44
    return c

def main():
    print('Conversor de medidas')
    select=int(input('Menú de Selección\n 1) Convertir de pies a centimetros. \n 2) Convertir de pulgadas a centimetros. \n 3) Convertir de yardas a centimetros. \nEscribe aquí el número de tu elección: '))

    if select==1:
        val=float(input('Escribe la cantidad a convertir: '))
        res=pies(val)
        print(f'{res:.2f}')

    elif select==2:
        val=float(input('Escribe la cantidad a convertir: '))
        res=pulgadas(val)
        print(f'{res:.2f}')

    elif select==3:
        val=float(input('Escribe la cantidad a convertir: '))
        res=yardas(val)
        print(f'{res:.2f}')        

    
    else:
        print('Escribe un valor dentro del rango')
        main()        
main()            
