#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     float n1,n2,n3,n4, media;
     scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
     
     media = ( (n1*2) + (n2*3) + (n3*4) + (n4*1) ) / 10;
     
     printf("Media: %.1f\n", media);
     
     if(media >= 7){
         printf("Aluno aprovado.\n");
     }else if(media < 5){
         printf("Aluno reprovado.\n");
     }else if(media >= 5 && media < 7){
         printf("Aluno em exame.\n");
         float nota;
         scanf("%f", &nota);
         printf("Nota do exame: %.1f\n", nota);
         media = (media + nota) / 2;
         if(media >= 5){
             printf("Aluno aprovado.\n");
         }else{
             printf("Aluno reprovado.\n");
         }
         printf("Media final: %.1f\n", media);
     }
 
    return 0;
}