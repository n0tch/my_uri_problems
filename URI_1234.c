#include <stdio.h>
#include <string.h>

int main(){
  
  char p[51];
  int i,j;
  
  while(gets(p) != NULL){
    for(i=0,j=0;i<strlen(p);i++){
      if(p[i] == ' '){
        printf(" ");
      }else if(!isdigit(p[i])){
        if(j % 2 == 0){
          printf("%c", toupper(p[i]));
        }else{
          printf("%c", tolower(p[i]));
        }
        j++;
      }else{
        printf("%c", p[i]);
      }
    }
    printf("\n");
  }
  return 0;
}