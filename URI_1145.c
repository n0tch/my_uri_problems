#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y,i;
    scanf("%d %d", &x,&y);
    
    for(i=1;i<=y;i++){
        if(i%x == 0){
            printf("%d\n", i);
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}