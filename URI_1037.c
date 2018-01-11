#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
      float num;
    scanf("%f", &num);
    
    if(num < 0){
        printf("Fora de intervalo\n");
    }else if(num >= 0 && num <= 25){
        printf("Intervalo [0,25]\n");
    }else if(num > 25 && num <= 50){
        printf("Intervalo (25,50]\n");
    }else if(num > 50 && num <= 75){
        printf("Intervalo (50,75]\n");
    }else if(num > 75 && num <= 100){
        printf("Intervalo (75,100]\n");
    }else{
        printf("Fora de intervalo\n");
    }
 
    return 0;
}