#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i;
    float count;
    
    for(i=1,count=0;i<=100;i++){
        count += (1/(float)i);
    }
    printf("%.2f\n", count);
    return 0;
}