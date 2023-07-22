#Matrices
#Erick Segura Sánchez 

def crea_matriz_numeros(matrix,n):
    for ren in range(n):
        lista=[]
        for col in range(n):
            lista.append(ren)
        matrix.append(lista)
    return matrix    

def muestra_matriz(matrix,n):
     for ren in range(n): 
        for col in range(n):
            print(matrix[ren][col], end=' ')
        print('')    

def main():
    matrix=[]
    n=int(input('Matrix size: '))
    while True:
        if n>=2:
            break
        else:
            n=int(input('2 or bigger'))
    mat=crea_matriz_numeros(matrix,n)
    muestra_matriz(matrix,n)

main()
