#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,y,flg=1;
    
    while(flg){
        scanf("%d %d", &x,&y);
        
        if((x==0 && y != 0) || (y == 0 && x != 0) || (x==0 && y==0)){
            break;
        }else if(x>0 && y>0){
            printf("primeiro\n");
        }else if(x<0 && y>0){
            printf("segundo\n");
        }else if(x<0 && y<0){
            printf("terceiro\n");
        }else if(x>0 && y<0){
            printf("quarto\n");
        }
    }
    return 0;
}