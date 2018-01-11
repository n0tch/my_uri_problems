#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,i,j;
    int x,y,count,sum;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        for(j=x,count=1,sum=0;count<=y;j++){
            if(j%2!=0){
              count++;
              sum+=j;
            }
            
        }
        printf("%d\n", sum);
    }
    return 0;
}