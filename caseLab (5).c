#include <stdio.h>

int fib(int N){
	if(N == 0){
		return 0;
	} 
	else if(N == 1){
		return 1;
	} 
	else if(N == 2){
		return 1;
	} 
	else{
		return fib(N - 3) + fib(N - 1);
	}
}

int main(){

	int N;	
	scanf("%d", &N);
	printf("%d\n", fib(N));
	
	return 0;
}
