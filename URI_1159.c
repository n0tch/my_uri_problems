#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,j,sum;
    
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }else{
            for(i=n,sum=0,j=1;j<=5;i++){
                if(i%2==0){
                    sum+=i;
                    j++;
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}