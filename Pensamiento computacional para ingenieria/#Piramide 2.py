#Piramide Estilo 2
#Erick Segura Sánchez

acc=0
j=0
select=0
def oper(): 
    while True:
        n=int(input('Escribe un número para tu pirámide (Entre el 1 al 10): '))
        if n>0 and n<=10:
            break

    for i in range (0,n+1):
        for j in range(1,i+1):
            print(j, end=" ") 
        for j in range(i-1,0, -1):
            print(j, end=" ")
        print("")

    main()
    
def main():
    select=str(input('Escribe Y para hacer una imagen, o cualquier tecla para terminar: '))
    if select == "Y" or select=="y":
        oper()    
 
main()            