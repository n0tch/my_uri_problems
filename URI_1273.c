#include <stdio.h>
#include <string.h>

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n,i,j,maior_i,flg=0;
    
    do{
      scanf("%d", &n);
      if(n ==0)
        break;
        
      if(flg != 0)
        printf("\n");
        
      char palavras[n][51];
      
      for(i=0;i<n;i++){
        scanf("%s", palavras[i]);
        if(i==0){
          maior_i=i;
        }else if(strlen(palavras[i]) > strlen(palavras[maior_i])){
          maior_i = i;
        }
      }
      
      for(i=0;i<n;i++){
        for(j=0;j<(strlen(palavras[maior_i]) - strlen(palavras[i])); j++){
          printf(" ");
        }
        printf("%s\n", palavras[i]);
      }
      flg = 1;
      
    }while(n!=0);
    
    return 0;
}