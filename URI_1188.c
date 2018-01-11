#include <stdio.h>
#define T 12
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double M[12][12],soma;
    int i,j,k,count=0;
    char op;
    
    scanf("%c",&op);
    
    for(i=0,k=T-1,soma=0;i<T;i++,k--){
        for(j=0;j<T;j++){
            scanf("%lf",&M[i][j]);
            
            if(j<i && j>k){
                soma+=M[i][j];
            }
        }
    }
    
    if(op == 'S'){
        printf("%.1lf\n",soma);
    }else if(op == 'M'){
        printf("%.1lf\n",soma/count);
    }
    return 0;
}