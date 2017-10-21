n = int(input())
entrada = [int(i) for i in input().split()]
menor = entrada[0]
position,cont = 0,0
for j in range (n):
	if entrada[j] < menor:
		menor = entrada[j]
		position = cont
	cont += 1
print("Menor valor: %d" % menor)
print("Posicao: %d" % position)
