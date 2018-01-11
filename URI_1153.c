#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n, fat=1;
     scanf("%d", &n);
     
     while(n>0){
         fat*=n;
         n--;
     }
    
    printf("%d\n", fat);
    return 0;
}