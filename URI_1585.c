#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n;
    int x,y;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d %d", &x,&y);
        printf("%d cm2\n",(int)((x*y)/2));
    }
    return 0;
}