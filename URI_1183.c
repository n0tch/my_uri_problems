#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j,c;
    char op;
    float M[12][12],soma=0,vzs=0;
    
    scanf(" %c", &op);
    
    for(i=0,c=1;i<12;i++,c++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);
            if(j>=c){
                soma+=M[i][j];
                vzs++;
            }
        }
    }
    
    if(op == 'S'){
        printf("%.1f\n", soma);
    }else if(op == 'M'){
        printf("%.1f\n", soma/vzs);
    }
    return 0;
}