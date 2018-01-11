#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    long long int n,m,soma;
    
    scanf("%lld %lld", &n,&m);
    soma = (n+m) * (m-n+1) / 2;
    printf("%lld\n", soma);
    
    return 0;
}