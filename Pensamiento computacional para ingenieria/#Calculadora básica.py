#Calculadora básica
#Erick Segura Sánchez


def operacion(a,b,sel):
    if sel == 's' or sel == 'S':
        res=a+b
        return res

    elif sel == 'r' or sel == 'R':
        res=a-b
        return res

    elif sel == 'm' or sel == 'M':
        res=a*b
        return res 

    elif sel == 'd' or sel == 'D':
        res=a/b
        return res 

    else:
        res='Selecciona una opción'
        main()                

def main():
    print('Calculadora Básica')
    n1=int(input('Escribe el primer número: '))
    n2=int(input('Escribe el segundo número: '))
    select=str(input('s        Suma\nr        Resta\nm       Multiplicación\nd        División\nSelecciona la operacion a realizar: '))
    res=operacion(n1,n2,select)
    print(f'{res}')

main()