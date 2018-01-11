# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

tamanhos = {1:2,2:5,3:5,4:4,5:5,6:6,7:3,8:7,9:6,0:6}
n = int(input())

for i in range(0,n):
    num = input()
    total = 0
    for j in num:
        total += tamanhos[int(j)]
    
    print("{} leds".format(total))
