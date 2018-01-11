#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int senha, flg = 0;
    
    while(!flg){
        scanf("%d", &senha);
        if(senha != 2002){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
            flg = 1;
        }
    }
    return 0;
}