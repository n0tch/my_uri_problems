#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int i=0, op=1;
    float vet[2],n;
    
    while(op != 2){
        scanf("%f", &n);
        if(n>=0 && n <= 10){
            vet[i] = n;
            i++;
        }else{
            printf("nota invalida\n");
        }
        
        if(i > 1){
            printf("media = %.2f\n", (vet[0]+vet[1])/2 );
            printf("novo calculo (1-sim 2-nao)\n");
            
            scanf("%d", &op);
            
            if(op != 1 && op != 2){
              while(1){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &op);
                if(op == 1 || op == 2){
                  break;
                }
              }
            }

            i=0;
        }
    }
    return 0;
}