#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y,aux;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(y>x){
        aux = x;
        x = y;
        y = aux;
    }
    
    for(aux=y+1;aux<x;aux++){
        if(aux%5 == 2 || aux%5 == 3){
            printf("%d\n", aux);
        }
    }
 
    return 0;
}