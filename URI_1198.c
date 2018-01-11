#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    long long n,m;
    
    while(scanf("%lli %lli", &n,&m) != EOF){
      if(n > m){
        printf("%lli\n", n-m);
      }else{
        printf("%lli\n", m-n);
      }
    }
    
    return 0;
}