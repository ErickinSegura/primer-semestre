#Convertir unidades
#Erick Segura Sánchez


def celFar(c):
    f=(c * 9/5) + 32 
    return(f)

def farCel(f):
    c=(f-32)/1.8
    return(c)




def main():
    print('Conversor de Temperatura')
    select=str(input('Para converir Fahrenheit a Celsius escribe F, si quieres de Celsius a Fahrenheit escribe C: '))

    if select=='F' or select =='f':
        val=float(input('Escribe la cantidad a convertir: '))
        res=farCel(val)
        print(f'{res:.2f}')

    elif select=='C' or select =='c':
        val=float(input('Escribe la cantidad a convertir: '))
        res=celFar(val)
        print(f'{res:.2f}')
    
    else:
        print('Escribe un valor dentro del rango')
        main()    


main()