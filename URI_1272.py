# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())
flg = 1

for i in range(0,n):
  texto = input()
  
  for j in texto:
    if j != ' ' and flg == 1:
      print(j,end="")
      flg = 0
    elif j == ' ':
      #print(j,end="")
      flg = 1
  
  flg = 1
  print()