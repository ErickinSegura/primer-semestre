#Palindromo
#Erick Segura Sánchez 

pal=input()
pal=pal.replace(" ", "").upper()

if pal == pal[::-1]:
    print('Es palindromo')
else:
    print('No es palindromo')
