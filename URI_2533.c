#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int vzs,c,n,i;
    float d_soma=0,n_soma=0;
    
    while(scanf("%d", &vzs) != EOF){
        for(i=0;i<vzs;i++){
            scanf("%d %d", &n,&c);
            d_soma = (n*c)+d_soma;
            n_soma += c;
        }
        
        printf("%.4f\n",(d_soma/(n_soma*100)));
        d_soma = 0;
        n_soma = 0;
    }
    return 0;
}