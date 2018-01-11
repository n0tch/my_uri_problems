#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,i,voto,total;
    float meta;
    
    while(scanf("%d",&n) != EOF){
        meta = (2/(float)3) * n;
        for(i=0,total=0;i<n;i++){
            scanf("%d",&voto);
            if(voto == 1){
                total++;
            }
        }
        
        if(total >= meta){
            printf("impeachment\n");
        }else{
            printf("acusacao arquivada\n");
        }
    }
 
    return 0;
}