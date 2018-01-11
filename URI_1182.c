#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,j;
    char op;
    float M[12][12],soma=0;
    
    scanf("%d", &n);
    scanf(" %c",&op);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);
            if(j == n){
                soma+=M[i][j];
            }
        }
    }
    
    if(op == 'S'){
        printf("%.1f\n", soma);
    }else if(op == 'M'){
        printf("%.1f\n", (soma/12));
    }
    return 0;
}