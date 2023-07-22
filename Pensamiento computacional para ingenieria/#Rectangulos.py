#Rectangulos
#Erick Segura Sánchez 

def areaRect(lg,ach):
    area=lg*ach
    return area

def perimetroRect(lg,anch):
    peri=lg*2+anch*2
    return peri

def main():
    lrg=int(input('Largo: '))
    anch=int(input('Ancho: '))
    
    des=str(input('Para calcular el perimetro escribe P, para calcular el área escribe A\n'))
    if des=='p' or des=='P':
        peri=perimetroRect(lrg,anch)
        print(peri)
    elif des=='a' or des=='A':
        area=areaRect(lrg,anch)
        print(area)
    else:
        print('No seleccionaste ninguna opción')    

main()