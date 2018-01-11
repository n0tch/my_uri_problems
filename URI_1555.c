#include <stdio.h>
#include <math.h>

float rafael(int x,int y);
float beto(int x,int y);
float carlos(int x,int y);

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,x,y,i;
    float r,b,c;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d %d", &x,&y);
        r = rafael(x,y);
        b = beto(x,y);
        c = carlos(x,y);
        
        if(r > b && r > c){
            printf("Rafael ganhou\n");
        }else if(b > r && b > c){
            printf("Beto ganhou\n");
        }else{
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}

float rafael(int x,int y){
    return pow(3*x,2) + pow(y,2);
}

float beto(int x,int y){
    return 2*(pow(x,2)) + pow((5*y),2);
}

float carlos(int x,int y){
    return -100*x + pow(y,3);
}
