#include <stdio.h>
#include <string.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,j,count_i,count_j,maior;
    char tam[15];
    
    do{
        
        scanf("%d",&n);
        int M[n][n];
        for(i=0,count_i=1;i<n;i++,count_i+=count_i){
            count_j = count_i;
            for(j=0;j<n;j++){
              if(j==0)
                maior = count_j;
              else if(count_j > maior)
                maior = count_j;
              M[i][j] = count_j;
              count_j+=count_j;
            }
        }
        
        sprintf(tam,"%d",maior);
        
        for(i=0;i<n;i++){
          for(j=0;j<n;j++){
            if(j==(n-1)){
              printf("%*d", strlen(tam), M[i][j]);
            }else{
              printf("%*d ", strlen(tam), M[i][j]);
            }
          }
          printf("\n");
        }
        
        if(n!=0){
          printf("\n");
        }
        
    }while(n!=0);
    
    return 0;
}