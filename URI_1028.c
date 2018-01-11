#include <stdio.h>
 
int mdc(int a, int b);

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code yQour solution here
     * Escriba su solución aquí
     */
    
    int n,m,vzs;
    
    scanf("%d", &vzs);
    
    while(vzs--){
      scanf("%d %d", &n, &m);
      printf("%d\n",mdc(n,m));
    }
    
    return 0;
}

int mdc(int a, int b){
  int r;
  
  do{
    r = a % b;
    a = b;
    b = r;
  }while(r != 0);
  
  return a;
}