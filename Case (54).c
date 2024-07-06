#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int opinions[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &opinions[i]);
    }

    int isEasy = 1;
    for (int i = 0; i < N; i++) {
        if (opinions[i] == 1) {
            isEasy = 0;
            break;
        }
    }

    if (isEasy) {
        printf("easy\n");
    } else {
        printf("not easy\n");
    }

    return 0;
}
