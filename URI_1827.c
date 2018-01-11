#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
  
    int i,j,k,n,tam,centro;
    
    while(scanf("%d", &n) != EOF){
      tam = n / 3;
      centro = (n-1)/2;
      for(i=0,k=n-1;i<n;i++,k--){
        for(j=0;j<n;j++){
          if(i == centro && j == centro){
            printf("4");
          }else if((i >= tam && i < (n-tam)) && (j >= tam && j < (n-tam)) ){
            printf("1");
          }else if(j == i){
            printf("2");
          }else if(j == k){
            printf("3");
          }else{
            printf("0");
          }
        }
        printf("\n");
      }
      printf("\n");
    }

    return 0;
}