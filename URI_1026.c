#include <stdio.h>
#include <stdint.h>

int main(){
  
  int64_t x,y;
  
  while(scanf("%lld %lld", &x,&y) != EOF){
    printf("%lld\n", (x^y));
  }
  return 0;
}