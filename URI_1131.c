#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,g, inter=0, gremio=0, empate=0, jogos=0;
    int op=1;
    
    while(op == 1){
        scanf("%d %d", &i, &g);
        jogos++;
        if(i>g){
            inter++;
        }else if(g>i){
            gremio++;
        }else{
            empate++;
        }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
    }
    
    printf("%d grenais\n", jogos);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(gremio == inter){
        printf("Nao houve vencedor\n");
    }else if(gremio > inter){
        printf("Gremio venceu mais\n");
    }else if(inter > gremio){
        printf("Inter venceu mais\n");
    }
    
    return 0;
}