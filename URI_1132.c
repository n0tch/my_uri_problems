#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int x,y,i, sum=0;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(y>x){
        i = x;
        x = y;
        y = i;
    }
    
    for(i=y;i<=x;i++){
        if(i%13 != 0){
            sum+=i;
        }
    }
    printf("%d\n", sum);
    return 0;
}