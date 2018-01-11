#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,num,i,j,s=0;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &num);
        for(j=1;j<=num;j++){
            if(j%2==0){
                s-=1;
            }else{
                s+=1;
            }
        }
        
        printf("%d\n",s);
        s=0;
    }
    
    return 0;
}