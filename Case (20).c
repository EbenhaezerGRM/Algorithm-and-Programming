#include <stdio.h>
#include <string.h>

int main() {
    int T;

    scanf("%d", &T);
    char N[1000][1000];

    for (int i = 0; i < T; i++) {
        scanf("%s", N[i]);
        int length = strlen(N[i]);
        printf("Case #%d: %d\n", i+1, length);
    }

    return 0;
}
