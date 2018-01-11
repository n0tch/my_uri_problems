#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int n, vlr, letra, i, flg=1;
    char ops[] = {'A', 'B', 'C', 'D', 'E', '*'};
    
    while(1){
      scanf("%d", &n);
      if(n==0)
        break;
        
      while(n--){
        for(i=0;i<5;i++){
          scanf("%d", &vlr);
          
          if(vlr <= 127){
            if(flg)
              letra = i;
            else
              letra = 5;
              
            flg = 0;
          }
          
        }
        
        if(flg)
          letra = 5;
          
        printf("%c\n", ops[letra]);
        flg = 1;
      }
    }
    
    return 0;
}