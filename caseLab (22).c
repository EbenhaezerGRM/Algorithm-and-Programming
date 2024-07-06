#include <stdio.h>

void decToBinary(long long int n) {
    int binaryNum[100000];
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int tc; 
    long long int N; 
    scanf("%d", &tc);

    for (int i = 1; i <= tc; i++) {
        scanf("%lld", &N);
        printf("Case #%d: ", i);
        decToBinary(N);
        printf("\n"); 
    }
    return 0;
}
