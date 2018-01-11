#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,f;
    
    scanf("%d %d", &i,&f);
    if(f > i){
        printf("O JOGO DUROU %d HORA(S)\n", (f-i));
    }else if(i == f){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S)\n", (24 - i) + f);
    }
    return 0;
}