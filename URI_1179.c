#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int v_par[5], v_impar[5];
    int n,i,par=0,impar=0,j;
    
    for(i=0;i<15;i++){
        scanf("%d", &n);
        if(n%2==0){
            v_par[par] = n;
            par++;
        }else{
            v_impar[impar] = n;
            impar++;
        }
        
        if(par==5){
            for(j=0;j<5;j++){
                printf("par[%d] = %d\n", j,v_par[j]);
            }
            par=0;
        }
        if(impar == 5){
            for(j=0;j<5;j++){
                printf("impar[%d] = %d\n", j,v_impar[j]);
            }
            impar = 0;
        }
    }
    
    for(i=0;i<impar;i++){
        printf("impar[%d] = %d\n", i,v_impar[i]);
    }
    
    for(i=0;i<par;i++){
        printf("par[%d] = %d\n", i,v_par[i]);
    }
    return 0;
}