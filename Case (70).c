#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fibonacciString(int n, char s0, char s1, char** result) {
    if (n == 0) {
        *result = malloc(2);
        (*result)[0] = s0;
        (*result)[1] = '\0';
    } else if (n == 1) {
        *result = malloc(2);
        (*result)[0] = s1;
        (*result)[1] = '\0';
    } else {
        char* prev1;
        char* prev2;
        fibonacciString(n - 1, s0, s1, &prev1);
        fibonacciString(n - 2, s0, s1, &prev2);
        
        *result = malloc(strlen(prev1) + strlen(prev2) + 1);
        strcpy(*result, prev1);
        strcat(*result, prev2);

        free(prev1);
        free(prev2);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int n;
        char s0, s1;
        scanf("%d %c %c", &n, &s0, &s1);

        char* result;
        fibonacciString(n, s0, s1, &result);

        printf("Case #%d: %s\n", i, result);

        free(result);
    }

    return 0;
}
