# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a,b = map(int, input().split())
aux = 0

if(a > b):
  aux = a
  a = b
  b = aux
  
if((b/a)-(int(b/a)) == 0):
  print("Sao Multiplos")
else:
  print("Nao sao Multiplos")
