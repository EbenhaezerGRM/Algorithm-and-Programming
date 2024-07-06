#include <stdio.h>

int main(){
	int n;
	char s[101];
	
	for(int i = 0; i < 3; i++){
		scanf("%d %s", &n, s);
		printf("%c%c\n", s[n-1], s[0]);		
	}
	
	return 0;
}

