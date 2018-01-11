#include <stdio.h>
#include <math.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,i,j;
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            if(j==3){
                printf("%.0f", pow(i,j));
            }else{
                printf("%.0f ", pow(i,j));
            }
        }
        printf("\n");
    }
    return 0;
}