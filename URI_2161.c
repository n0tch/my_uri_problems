#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int vzs,i;
    double r=3;
    
    scanf("%d", &vzs);
    
    for(i=0;i<vzs;i++){
      if(i==0){
        r=(6+(1/6));
      }else{
        r = 6 + (1 / r);
      }
      if(i==(vzs-1)){
        r = 3+(1/r);
      }
    }
    
    printf("%.10f\n", r);
    return 0;
}