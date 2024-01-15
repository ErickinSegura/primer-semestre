#Piramide Estilo 2
#Erick Segura Sánchez

acc = 0
j = 0
select = 0


def oper():
    while True:
        n = int(input('Escribe un número para tu pirámide (Entre el 1 al 10): '))
        if 0 < n <= 10:
            break

    # Piramide Invertida

    for i in range(n, 1, -1):
        for j in range(1, i + 1):
            print(j, end=" ")
        for j in range(i - 1, 0, -1):
            print(j, end=" ")
        print("")
    print("", end="")
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        for j in range(i - 1, 0, -1):
            print(j, end=" ")
        print("")

    main()


def main():
    select = input('Escribe Y para hacer una imagen, o cualquier tecla para terminar: ')
    if select == "Y" or select == "y":
        oper()

main()
