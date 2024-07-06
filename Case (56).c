#include <stdio.h>
#include <string.h>

int main(){
    int n; //test case
    char s[1001];

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        getchar();
        scanf("%[^\n]", s);

        printf("Case #%d: ", i);
        for(int j = strlen(s) - 1; j >= 0; j--){
            printf("%c", s[j]);
        }
        printf("\n");

    }
    return 0;
}