#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int n,i,vzs;
    float max,min,alt;
    
    while (scanf("%d %f %f", &n, &min, &max) != EOF){
    
      for(i=0,vzs=0;i<n;i++){
          scanf("%f", &alt);
          if(alt >= min && alt <= max){
              vzs++;
          }
      }
      
      printf("%d\n",vzs);
      
    }
 
    return 0;
}