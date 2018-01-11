#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int x,y, count=0, aux,i;
     scanf("%d",&x);
     scanf("%d",&y);
     
     if(x<y){
         aux = x;
         x = y;
         y = aux;
     }
     
     for(i=y+1;i<x;i++){
       
         if(i%2 != 0){
             count += i;
         }
     }
    
    printf("%d\n",count);
    return 0;
}