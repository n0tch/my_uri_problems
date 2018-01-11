#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int x,y;
     scanf("%d %d", &x,&y);
    
    while(x!=y){
        if(x > y){
            printf("Decrescente\n");
        }else if(x<y){
            printf("Crescente\n");
        }
        scanf("%d %d", &x,&y);
    }
    return 0;
}