#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n,i,j,num,vzs;
     scanf("%d", &n);
     
     for(i=0;i<n;i++){
         scanf("%d", &num);
         for(j=1,vzs=0;j<=num;j++){
             if(num%j==0){
                 vzs++;
             }
         }
         if(vzs==2){
             printf("%d eh primo\n",num);
         }else{
             printf("%d nao eh primo\n",num);
         }
     }
 
    return 0;
}