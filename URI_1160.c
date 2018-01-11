#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int T,i,j;
    int PA, PB;
    float G1, G2;
    int txA, txB;
    int count,flg=1;
    
    scanf("%d", &T);
    
    for(i=0;i<T;i++){
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        txA = (int)(PA*(G1/(float)100));
        txB = (int)(PB*(G2/(float)100));
        
        PA += txA;
        PB += txB;
        
        for(j=0,count=1;;j++){
            if(count > 100){
                break;
            }else if(PA>PB){
                break;
            }else{
              txA = (int)(PA*(G1/(float)100));
              txB = (int)(PB*(G2/(float)100));
              PA += txA;
              PB += txB;
              count++;
            }
        }
        
        if(count > 100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", count);
        }
    }
 
    return 0;
}