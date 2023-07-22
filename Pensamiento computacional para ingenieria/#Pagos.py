#Pagos
#Erick Segura Sánchez

total=0
ticket=0
pag=float(input('Ingresa tu primer pago: '))
while pag != 0:
    total+=pag
    ticket+=1
    pag=float(input('Ingresa el siguiente pago o cero para terminar: '))
prom = total/ticket
print(f'Total= {total:.2f} MXN')
print(f'Promedio= {prom:.2f} MXN')    