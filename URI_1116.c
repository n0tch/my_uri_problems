#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int qnt, i;
    scanf("%d", &qnt);
    int mat[qnt][2];
    
    for(i=0;i<qnt;i++){
      scanf("%d %d", &mat[i][0], &mat[i][1]);
    }
    for(i=0;i<qnt;i++){
        if(mat[i][1] == 0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1f\n", ((float)mat[i][0]/(float)mat[i][1]));
        }
        
    }
    return 0;
}