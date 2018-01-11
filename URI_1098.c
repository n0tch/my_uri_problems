#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    float i,j,aux;
    
    for(i=0;i<2.2;i+=0.2){
        for(j=1;j<=3;j++){
          aux = i;
            if(i==0 || i == 1 || i >= 2){
              printf("I=%.0f J=%.0f\n", i, (j+aux));
              
            }else{
              printf("I=%.1f J=%.1f\n", i, (j+aux));
            }
        }
    }
    return 0;
}