#include <stdio.h>
#include <math.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n;
    float r;
    
    scanf("%d",&n);
    r = n/log(n);
    
    printf("%.1f %.1f\n",n/log(n),(1.25506*n/log(n)));
    return 0;
}