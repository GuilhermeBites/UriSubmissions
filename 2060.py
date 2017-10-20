N = int(input())

L = input().split()

multiplos = {2:0, 3:0, 4:0, 5:0}

for numero in L:
    numero = int(numero)
    
    for mul in multiplos.keys():
        if numero % mul == 0: multiplos[mul] += 1

print("%d Multiplo(s) de 2" % multiplos[2])
print("%d Multiplo(s) de 3" % multiplos[3])
print("%d Multiplo(s) de 4" % multiplos[4])
print("%d Multiplo(s) de 5" % multiplos[5])