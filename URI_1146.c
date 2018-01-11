#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,i;
    scanf("%d", &x);
    
    while(x!=0){
        for(i=1;i<=x;i++){
            if(i==x){
                printf("%d\n", i);
            }else{
                printf("%d ",i);
            }
        }
        scanf("%d", &x);
    }
    return 0;
}