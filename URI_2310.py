# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())
s = b = a = 0
sT = bT = aT = 0


for i in range(0,n):
    nome = input()
    s1,b1,a1 = map(int, input().split())
    sT += s1
    bT += b1
    aT += a1
    s1,b1,a1 = map(int, input().split())
    s += s1
    b += b1
    a += a1
    
print("Pontos de Saque: {:.2f} %.".format((s*100)/sT))
print("Pontos de Bloqueio: {:.2f} %.".format((b*100)/bT))
print("Pontos de Ataque: {:.2f} %.".format((a*100)/aT))