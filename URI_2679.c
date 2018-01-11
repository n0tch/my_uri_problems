#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     long n;
    scanf("%ld", &n);
    
    if(n%2==0){
      printf("%ld\n", n+2);
    }else{
      printf("%ld\n", n+1);
    }
    
    return 0;
}