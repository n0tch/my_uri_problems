#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * jajajaj
     */
    int x[10],i,num;
    
    for(i=0;i<10;i++){
        scanf("%d", &x[i]);
        if(x[i] <= 0){
            x[i] = 1;
        }
    }
    
    for(i=0;i<10;i++){
        printf("X[%d] = %d\n", i,x[i]);
    }
    return 0;
}