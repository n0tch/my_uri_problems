# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())
h = m = o = 0
for i in range(0,n):
    h,m,o = map(int, input().split())
    if h < 10:
        h = "0"+str(h)
    if m < 10:
        m = "0"+str(m)
        
    if o == 1:
        print("{}:{} - A porta abriu!".format(h,m))
    else:
        print("{}:{} - A porta fechou!".format(h,m))