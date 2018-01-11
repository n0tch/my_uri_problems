# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())

for i in range(0,n):
    bonus = int(input())
    a1,d1,l1 = map(int, input().split())
    a2,d2,l2 = map(int, input().split())
    
    vg1 = (a1+d1)/2
    vg2 = (a2+d2)/2
    
    if l1 % 2 == 0:
        vg1 += bonus
    if l2 % 2 == 0:
        vg2 += bonus

    if vg1 > vg2:
        print("Dabriel")
    elif vg1 < vg2:
        print("Guarte")
    else:
        print("Empate")