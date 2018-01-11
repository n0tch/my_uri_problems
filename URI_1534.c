#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,j,k;
    
    while(scanf("%d",&n) != EOF){
        int mat[n][n];
        for(i=0,k=(n-1);i<n;i++,k--){
            for(j=0;j<n;j++){
                if(j==k){
                    mat[i][j] = 2;
                }else if(j==i){
                    mat[i][j] = 1;
                }else{
                    mat[i][j] = 3;
                }
            }
        }
        
        for(i=0;i<n;i++){
          for(j=0;j<n;j++){
            printf("%d",mat[i][j]);
          }
          printf("\n");
        }
    }
    return 0;
}