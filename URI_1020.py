# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

dias = int(input())

print("{} ano(s)".format(int(dias / 365)))
dias -= (365*int(dias / 365))

print("{} mes(es)".format(int(dias/30)))
dias -= (30 * int(dias/30))

print("{} dia(s)".format(dias))