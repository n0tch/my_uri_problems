#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i;
    float n1,n2,n3;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("%.1f\n", ((n1*2) + (n2*3) + (n3*5))/10 );
    }
    return 0;
}