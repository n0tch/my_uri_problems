#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void uniao(int64_t v[], int x,int y){
	int vzs = 0;
	int64_t res = v[x-1] | v [y-1];
	while(res){
		if( res%2 == 1)
			vzs++;
		//res recebe ele mesmo menos o ultimo bit
		res = res >> (int64_t)1;
	}
	
	printf("%d\n", vzs);
}

void interseccao(int64_t v[], int x,int y){
	int vzs = 0;
	int64_t res = v[x-1] & v[y-1];
	while(res){
		if(res%2 == 1)
			vzs++;
		//res recebe ele mesmo menos o ultimo bit
		res = res >> (int64_t)1;
	}
	
	printf("%d\n", vzs);
}

int main(void){
	
	int qnt, n, num,pos=0,op,x,y, i,j, num_temp;
	int64_t temp;
	scanf("%d", &n);
	
	//while para os casos de teste
	while(n--){
		//qnt de conjuntos
		scanf("%d", &qnt);
		//vetor para receber as convercoes binarias
		int64_t vet[qnt];
		//for para receber os elementos dos conjuntos
		for(j=0;j<qnt;j++){
			//qnts elementos tem o conjunto j
			scanf("%d", &num);
			temp = 0x00;
			for(i=0;i<num;i++){
				//recebo o elemento e adiciono na 'string binaria'
				scanf("%d", &num_temp);
				temp = temp | ((int64_t)1 << num_temp-1);
			}
			//adiciono a 'string binaria' no vetor
			vet[pos] = temp;
			pos++;
		}
		
		//saber a qnt de consultas
		scanf("%d", &num);
		while(num--){
			scanf("%d %d %d", &op, &x, &y);
			if(op == 1){
				interseccao(vet, x,y);
			}
			else
				uniao(vet,x,y);
		}
		pos = 0;
	}
	return 0;
}
