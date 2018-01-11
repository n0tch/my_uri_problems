#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,code,new_code,game,total=0,i;
    
    while(scanf("%d %d", &n, &code) != EOF){
        for(i=0;i<n;i++){
            scanf("%d %d",&new_code,&game);
            if(new_code == code && game == 0){
                total++;
            }
        }
        
        printf("%d\n",total);
        total = 0;
    }
    return 0;
}