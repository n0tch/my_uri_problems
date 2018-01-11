#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        if(i==(n-1)){
            printf("Ho!\n");
        }else{
            printf("Ho ");
        }
    }
    return 0;
}