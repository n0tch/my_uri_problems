#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,i, count;
    scanf("%d", &x);
    
    for(i=x,count=0;count<6;i++){
        if(i%2 != 0){
            printf("%d\n",i);
            count++;
        }
    }
    return 0;
}