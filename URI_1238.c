#include<stdio.h>
#include<string.h>

int main(){
  
  char p1[100], p2[100];
  int n,i,j,maior;
  
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%s %s", &p1, &p2);
    
    if(strlen(p1) > strlen(p2)){
      maior = strlen(p1);
    }else{
      maior = strlen(p2);
    }
    
    for(j=0;j<maior;j++){
      if(j < strlen(p1)){
        printf("%c",p1[j]);
      }
      if(j < strlen(p2)){
        printf("%c",p2[j]);
      }
      
    }
    printf("\n");
    
  }
  
  return 0;
}