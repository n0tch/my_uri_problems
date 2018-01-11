#include <stdio.h>
#include <math.h>

int primo(long n);

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i;
    long num;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%ld", &num);
        if(primo(num)){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }
    return 0;
}

int primo(long n){
    long i;
    
    if(n == 2){
      return 1;
    }
    
    for(i=2;i<=sqrt(n)+1;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}