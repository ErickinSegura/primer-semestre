#Fecha
#Erick Segura Sánchez


#Input

an=int(input('Escribe el año: '))
mes=int(input('Escribe el mes: '))
dia=int(input('Escribe el dia: '))

dia1=dia+1

if mes != 0 and mes <= 12 and dia != 0 and dia <=31:  
    if (mes==12) and dia1==32:
        an=an+1
        mes=1
        dia=1
        print(f'{an}')
        print(f'{mes}')
        print(f'{dia}')
    else:
        print(f'{an}')
        if (mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10) and dia1==32:
            mes=mes+1
            dia=1
            print(f'{mes}')
            print(f'{dia}')
        elif (mes==4 or mes==6 or mes==5 or mes==9 or mes==11) and dia1==31:
            mes=mes+1
            dia=1
            print(f'{mes}')
            print(f'{dia}')
        elif mes==2: 
            if ((an%4==0 and an%100!=0) or an%400==0) and dia1 >= 30:
                mes=mes+1
                dia=1
                print(f'{mes}')
                print(f'{dia}')
            elif dia1==29: 
                mes=mes+1
                dia=1
                print(f'{mes}')
                print(f'{dia}')   
            elif dia1 > 28 and not ((an%4==0 and an%100!=0) or an%400==0):
                print(f'Inserte una fecha dentro del rango')  
            else:
                print(f'{mes}')
                print(f'{dia1}')
        else:
            print(f'Inserte una fecha dentro del rango')                     

else:
    print('Escribe un formato de fecha correcto')



