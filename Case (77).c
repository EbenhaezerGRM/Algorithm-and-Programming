#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N; 
        scanf("%lld", &N);

        int winner = 0;

        while (N != 1) {
            if (N % 2 == 0) {
                N /= 2;
            } else {
                
                if ((N & (N - 1)) == 0) {
                    winner = !winner;
                    break;
                }
                N = N * 3 + 1;
            }
            winner = !winner;
        }

        printf("Case #%d: %s\n", i, winner ? "Jojo" : "Lili");
    }

    return 0;
}
