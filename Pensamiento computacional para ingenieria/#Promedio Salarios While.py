#Promedio Salarios While
#Erick Segura Sánchez

cont = 0
tot=0
while cont<15:
    sal=int(input("Escribe tu salario "))
    tot=tot+sal
    cont=cont+1

prom=tot/(cont)

print('Tu total de salarios es', tot)
print('Tu promedio de salarios es ', prom)