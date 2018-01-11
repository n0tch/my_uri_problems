#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int m,n,aux;
     int i, sum=0;
     scanf("%d %d", &m, &n);
     
     while(m>0 && n>0){
       
         if(n>m){
             aux = m;
             m = n;
             n = aux;
         }
         
         for(i=n;i<=m;i++){
             sum += i;
             printf("%d ", i);
         }
         printf("Sum=%d\n",sum);
         sum = 0;
         scanf("%d %d", &m, &n);
     }
    return 0;
}