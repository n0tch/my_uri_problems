#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,i,j;
    int x, count;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &x);
        for(j=1,count=0;j<x;j++){
            if(x%j == 0){
                count+=j;
            }
        }
        if(count == x){
            printf("%d eh perfeito\n",x);
        }else{
            printf("%d nao eh perfeito\n", x);
        }
    }
 
    return 0;
}