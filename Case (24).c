#include <stdio.h>

int main(){
    int T;
    int N;
    int len;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &len);
        char word[len];
        getchar();
        scanf("%[^\n]", word);
        
        printf("Case #%d: ", i + 1);

        for(int j = 0; j < len; j++){
            if(word[j] >= 'a' && word[j] <= 'z'){
                printf("%c", word[j]);
            }
        }
        printf("\n");
    }

    return 0;
}