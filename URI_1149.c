#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,n,i,sum,count=1;
    
    scanf("%d %d", &a, &n);
    while(n<=0){
        scanf("%d", &n);
    }
    
    for(i=a,sum=0;count<=n;i++,count++){
      sum+=i;
    }
    
    printf("%d\n",sum);
    return 0;
}