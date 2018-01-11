#include<stdio.h>

long n_vezes = 0;

long fib(n){
	
	n_vezes++;
	if(n ==1)
		return 1;
	else if(n == 0)
		return 0;
	else
		return fib(n-1) + fib(n-2);
	
}

int main(){
	int num, n;
	
	scanf("%d", &n);
	while(n--){
		scanf("%d", &num);
		printf("fib(%d) = %ld calls = %ld\n", num,n_vezes-1,fib(num));
		n_vezes = 0;
	}
	
	return 0;
}