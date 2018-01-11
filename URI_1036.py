# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

A,B,C = map(float, input().split())
delta = pow(B,2) - 4*A*C

if(delta < 0 or A == 0):
  print("Impossivel calcular")
else:
  R1 = (-(B) + pow(delta,0.5)) / (2*A)
  R2 = (-(B) - pow(delta,0.5)) / (2*A)
  
  print("R1 = {:.5f}".format(R1))
  print("R2 = {:.5f}".format(R2))