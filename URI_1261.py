# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
dic = {}
qnt_dic, qnt_txt = map(int, input().split())

for _ in range(qnt_dic):
	nome , vlr = input().split()
	dic[nome] = int(vlr)

s = ""
total = 0
q = 0

while(True):
	s = input()
	if s == '.':
		print(total)
		total = 0
		q += 1
		
	if q == (qnt_txt):
		break
	
	for i in s.split():
		if i in dic:
			total += dic[i]
	