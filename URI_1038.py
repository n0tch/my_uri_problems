# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

item, qnt = map(int, input().split())

if(item == 1):
    print("Total: R$ {:.2f}".format(float(qnt*4)))
elif(item == 2):
    print("Total: R$ {:.2f}".format(float(qnt*(4.5))))
elif(item == 3):
    print("Total: R$ {:.2f}".format(float(qnt*5)))
elif(item == 4):
    print("Total: R$ {:.2f}".format(float(qnt*2)))
elif(item == 5):
    print("Total: R$ {:.2f}".format(float(qnt*(1.5))))