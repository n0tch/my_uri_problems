# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a,b,c = map(int, input().split())

if(a < b and a < c):
  if(b<c):
    print("{}\n{}\n{}".format(a,b,c))
  else:
    print("{}\n{}\n{}".format(a,c,b))
elif(b < c and b < a):
  if(a < c):
    print("{}\n{}\n{}".format(b,a,c))
  else:
    print("{}\n{}\n{}".format(b,c,a))
else:
  if(b < a):
    print("{}\n{}\n{}".format(c,b,a))
  else:
    print("{}\n{}\n{}".format(c,a,b))

print("\n{}\n{}\n{}".format(a,b,c))