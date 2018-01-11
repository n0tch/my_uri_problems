#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    
    int A,B;
    double salary;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%lf", &salary);
    
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2lf\n", (B*salary));
    return 0;
}