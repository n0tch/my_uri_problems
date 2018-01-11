#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j;
    for(i=1;i<=9;i+=2){
        for(j=7;j>4;j--){
            printf("I=%d J=%d\n", i,j);
        }
    }
    return 0;
}