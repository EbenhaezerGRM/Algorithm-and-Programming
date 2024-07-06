#include <stdio.h>
#include <string.h>

int main(){
    int T; //test case
    int N; //banyak soal

    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d", &N);
        char jawaban[T][N];
        char kunci[T][N];

        for(int j = 0; j < N; j++){
            scanf("%s %s", &jawaban[j], &kunci[j]);

            if(strcmpi(jawaban[j], kunci[j]) == 0){
                printf("sama");
            }
        }
    }
    return 0;
}