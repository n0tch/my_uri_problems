#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n, i, j, n1,n2, aux, sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d", &n1,&n2);
        if(n2 > n1){
            aux = n1;
            n1 = n2;
            n2 = aux;
        }
        
        for(j=n2+1;j<n1;j++){
            if(j%2 != 0){
                sum+=j;
            }
        }
        printf("%d\n", sum);
        sum=0;
    }
    return 0;
}