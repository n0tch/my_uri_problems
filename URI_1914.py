# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())

for i in range(0,n):
    nome1, esc1, nome2, esc2 = input().split()
    dic = {esc1:nome1, esc2:nome2}
    num1,num2 = map(int, input().split())
    if((num1+num2)% 2 == 0):
        print("{}".format(dic["PAR"]))
    else:
        print("{}".format(dic["IMPAR"]))
