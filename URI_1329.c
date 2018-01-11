#include <stdio.h>

int main(){
  
  int vzs,num,m=0,j=0;
  
  do{
    scanf("%d", &vzs);
    
    if(vzs == 0)
      break;
      
    while(vzs--){
      scanf("%d", &num);
      if(num == 1){
        j++;
      }else if(num == 0){
        m++;
      }
    }
    printf("Mary won %d times and John won %d times\n", m,j);
    m = j = 0;
  }while(vzs != 0);
  
  return 0;
}