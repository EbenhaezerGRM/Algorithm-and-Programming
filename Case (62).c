#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, K;
        scanf("%d %d", &N, &K);

        int count = 0;
        for (int j = 0; j < N; j++) {
            int weight;
            scanf("%d", &weight);
            if (weight >= K) {
                count++;
            }
        }

        printf("Case #%d: %d\n", i, count);
    }

    return 0;
}
