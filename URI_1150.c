#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x,z;
    int i,sum,count;
    
    scanf("%d %d", &x,&z);
    
    while(z<=x){
        scanf("%d",&z);
    }
    
    for(i=x,sum=i,count=1;;i++){
        if(sum+i >= z){
            count++;
            break;
        }else{
            sum+=i;
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}