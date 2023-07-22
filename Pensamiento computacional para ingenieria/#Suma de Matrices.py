#Suma de Matrices
#Erick Segura Sánchez 

def crear_matrix():
    matrix = []
    while True:
        datos=input('')
        if datos=="":
            print('')
            break
        else:
            renglon_lista=datos.split()
            renglon=[]
            for c in renglon_lista:
                renglon.append(int(c))
            matrix.append(renglon)


    return matrix

def summat(matrix,matrix2):
    suma = []
    matrix3=[]
    print(matrix)
    print(matrix2)

    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
                matrix3.append(matrix[i][j] + matrix2[i][j])
                suma.append(matrix3)        
    print(matrix3)            

        
def main():
    matriz = crear_matrix()
    matriz2 = crear_matrix()
    if len(matriz) == 0 or len(matriz2) == 0:
        print ('Error')
    else:
        smat = summat(matriz,matriz2)

    
main()