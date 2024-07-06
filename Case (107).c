#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int K;
        scanf("%d", &K);

        int position = 0;
        int jumps = 0;
        
        while (position < K) {
            jumps++;
            position += jumps;
        }

        printf("Case #%d: %d\n", i, jumps);
    }

    return 0;
}
