#include <stdio.h>
#define T 12
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    float M[T][T],soma;
    char op;
    int i,j,count;
    scanf("%c", &op);
    
    for(i=0,soma=0,count=0;i<T;i++){
        for(j=0;j<T;j++){
            scanf("%f", &M[i][j]);
            if(j<i){
                soma+=M[i][j];
                count++;
            }
        }
    }
    
    if(op == 'S'){
        printf("%.1f\n",soma);
    }else if(op == 'M'){
        printf("%.1f\n", soma/count);
    }
    return 0;
}