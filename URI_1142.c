#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here3
     * 
     * Escriba su solución aquí
     */
    
    int n,i, count;
    scanf("%d", &n);
    
    for(count=1;count<=(n*4);count++){
        if(count%4 == 0){
            printf("PUM\n");
        }else{
            printf("%d ", count);
        }
    }
    
    return 0;
}