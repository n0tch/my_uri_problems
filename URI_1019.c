#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int N;
    scanf("%d", &N);
    int h,m, s;
    
    s = N % 60;
    N = N / 60;
    m = N % 60;
    N = N / 60;
    h = N % 60;
 
    printf("%d:%d:%d\n", h,m,s);
    return 0;
}