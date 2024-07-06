#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);
    int K[N];

    int langkah = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &K[i]);
        langkah += K[i];

        if(langkah >= 40){
            langkah = langkah & 40;
        }
        else if(langkah == 12){
            langkah = 28;
        }
        else if(langkah == 35){
            langkah = 7;
        }
    }
    printf("%d\n", langkah);

    return 0;
}