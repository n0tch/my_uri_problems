#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n, num, in=0, out=0,i;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &num);
        if(num >= 10 && num <= 20){
            in++;
        }else{
            out++;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}