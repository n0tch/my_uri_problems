#include<stdio.h>
#include<string.h>

int main(){
  
  char p1[1001], p2[1001];
  int n,i,j,count;
  
  scanf("%d", &n);
  
  while(n--){
    scanf("%s %s", &p1, &p2);
    
    for(i=strlen(p2)-1,j=strlen(p1)-1,count=0;i>=0;i--,j--){
      if(p2[i] == p1[j]){
        count++;
      }else{
        break;
      }
    }
    
    if(count == strlen(p2)){
      printf("encaixa\n");
    }else{
      printf("nao encaixa\n");
    }
  }
  return 0;
}