# -*- coding: utf-8 -*-

n,p = 0,0
for i in range (0,6):
    t = float(input())
    if t>0:
        p +=1
    else:
        n +=1

print("%d valores positivos" % p)
