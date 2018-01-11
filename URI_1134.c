#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int op=1, a=0,g=0,d=0;
    
    while(op != 4){
        scanf("%d", &op);
        if(op == 1){
            a++;
        }else if(op == 2){
            g++;
        }else if(op == 3){
            d++;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}