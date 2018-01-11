#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j;
    float count=0;
    
    for(i=1,j=1;i<=40;i+=2,j*=2){
        count+= (i/(float)j);
    }
    
    printf("%.2f\n",count);
    return 0;
}