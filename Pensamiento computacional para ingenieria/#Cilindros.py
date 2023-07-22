#Una función llamada area_cilindro, que reciba el radio y altura del cilindro y regrese el área calculada.
#Una función llamada volumen_cilindro, que reciba el radio y altura del cilindro y regrese el volumen calculado.

#Erick Segura Sánchez

import math as m


def area_cilindro(rad,alt):
    area=2*m.pi*rad*alt+2*m.pi*rad**2
    return area
def volumen_cilindro(rad,alt):
    vol=m.pi*alt*rad**2
    return vol

def main():
    radio=float(input('Radio: '))
    altura=float(input('Altura: '))
    ar=area_cilindro(radio,altura)
    vol=volumen_cilindro(radio,altura)
    print(f'Area= {ar:.2f}')
    print(f'Volumen= {vol:.2f}')
main()