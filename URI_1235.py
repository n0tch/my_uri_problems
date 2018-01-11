# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())

for i in range(0,n):
  palavra = input()
  metade = int(len(palavra)/2)
  palavra = list(palavra)
  
  for j in range(metade-1, -1,-1):
    print(palavra[j],end="")
    
  for j in range(len(palavra)-1, metade-1, -1):
    print(palavra[j], end="")
    
  print()