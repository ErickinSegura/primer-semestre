#Promedio Salarios For
#Erick Segura Sánchez

tot = 0
for i in range (15):
    sal=int(input("Escribe tu salario "))
    tot=tot+sal

prom=tot/(i+1)

print('Tu total de salarios es', tot)
print('Tu promedio de salarios es ', prom)

