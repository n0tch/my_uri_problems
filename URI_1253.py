# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
n = int(input())

for i in range(0,n):
    string = input()
    casas = int(input())
    
    for letra in string:
        cod_uni = ord(letra) - casas
        #print("{}".format(cod_uni))
        dif = (cod_uni - 65)
        nova_letra = chr((dif % 26) + 65)
        print(nova_letra,end="")
    
    print()
