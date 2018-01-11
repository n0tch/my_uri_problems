#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int p1,p2, qnt1, qnt2;
     double vlr1,vlr2, total;
     
     scanf("%d %d %lf", &p1,&qnt1, &vlr1);
     scanf("%d %d %lf", &p2,&qnt2, &vlr2);
    
    total = (qnt1*vlr1)+(qnt2*vlr2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}