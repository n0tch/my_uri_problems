# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

n = int(input())
total = 0
rato = sapo = coelho = 0

for i in enumerate(range(n)):
    qnt, tipo = input().split()
    total += int(qnt)
    if tipo == 'C':
        coelho += int(qnt)
    elif tipo == 'R':
        rato += int(qnt)
    elif tipo == 'S':
        sapo += int(qnt)
    
print("Total: {} cobaias".format(total))
print("Total de coelhos: {}".format(coelho))
print("Total de ratos: {}".format(rato))
print("Total de sapos: {}".format(sapo))
print("Percentual de coelhos: {:.2f} %".format((coelho/total)*100) )
print("Percentual de ratos: {:.2f} %".format((rato/total)*100))
print("Percentual de sapos: {:.2f} %".format((sapo/total)*100))