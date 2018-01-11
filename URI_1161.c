#include <stdio.h>

long long fat(long long x);

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    long long n,m;
    
    while(scanf("%lli %lli", &m,&n) != EOF){
      printf("%lli\n", fat(m)+fat(n));
    }
    return 0;
}

long long fat(long long x){
    long long r=1, i;

    for(i=x;i>0;i--){
        r *= i;
    }
    
    return r;
}