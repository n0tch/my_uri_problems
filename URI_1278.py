# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

txt = []
txt_aux = []
maior = 0
aux = ""
flg = False
quebra_linha = False

while(1):
  n = int(input())
  if n == 0:
    break
  
  for i in range(0,n):
    txt.append(input())
  
  if quebra_linha:
    print()
    
  quebra_linha = True
  
  for i in range(0,n):
    for letra in txt[i]:
      if letra != ' ':
        aux += letra
        flg = True
      if letra == ' ' and flg:
        aux += ' '
        flg = False
    
    aux = aux.strip()
    txt_aux.append(aux)
    aux = ""
    
  
  for index, i in enumerate(txt_aux):
    if index == 0:
      maior = len(txt_aux[index])
    elif len(txt_aux[index]) > maior:
      maior = len(txt_aux[index])
  
  for i in range(0,n):
    for j in range(0,maior-len(txt_aux[i])):
      print(" ", end="")
    print(txt_aux[i])
  
  maior = 0
  del txt[:]
  del txt_aux[:]