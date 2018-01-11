#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,i,count;
    float c;
    
    scanf("%d", &n);
    
    for(i=0,count=0;i<n;i++,count=0){
        scanf("%f", &c);
        while(c > 1){
          c /= 2;
          count++;
        }
        printf("%d dias\n", count);
    }
    return 0;
}