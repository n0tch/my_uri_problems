#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,num,ant,pos=0;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
      scanf("%d", &num);
      if(i==0){
        ant = num;
      }else if(ant > num){
        pos = i;
        break;
      }else{
        ant = num;
      }
    }
    
    if(pos == 0)
      printf("0\n");
    else
      printf("%d\n", pos+1);
    
    return 0;
}