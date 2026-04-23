n = int(input())

correos = set()

for i in range(0, n, 1):
    cadena = input()
    cadenas = cadena.split('@')
    if '+' in cadenas[0]:
        auxiliar = cadenas[0].split('+')
        cadenas[0] = auxiliar[0]
    usuario = cadenas[0].replace('.', '').replace('+', '')
    dominio = cadenas[1]
    aux = usuario+"@"+dominio
    correos.add(aux)
print(len(correos))