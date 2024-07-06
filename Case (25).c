#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++){

        for (int x = 0; x < M; x++){
		    for (int y = M-1; y > x; y--){
			    printf(" ");
		    }
		    for (int z = 0; z <= x; z++) {
			    printf("*");
		    }
		printf("\n");
	    }

    }
    return 0;
}