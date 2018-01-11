#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, i;
    int a = 0, b = 1, c = a+b;
    scanf("%d", &n);
    printf("%d %d ", a,b);
    for(i=2;i<n;i++){
        
        if(i == n-1){
            printf("%d\n", c);
        }else{
            printf("%d ", c);
        }
        
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}