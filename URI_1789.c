#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,vlr,maior;
    
    while(scanf("%d",&n) != EOF){
        for(i=0;i<n;i++){
            scanf("%d",&vlr);
            if(i==0){
                maior = vlr;
            }else if(vlr > maior){
                maior = vlr;
            }
        }
        
        if(maior < 10){
            printf("1\n");
        }else if(maior >=10 && maior <20){
            printf("2\n");
        }else if(maior >=20){
            printf("3\n");
        }
    }
    return 0;
}