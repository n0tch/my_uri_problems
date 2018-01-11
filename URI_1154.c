#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i;
    float n=1, idd=0;
    
    for(i=0;;i++){
        scanf("%f", &n);
        if(n<0){
            break;
        }else{
            idd+=n;
        }
    }
    
    printf("%.2f\n", (idd/i));
    return 0;
}