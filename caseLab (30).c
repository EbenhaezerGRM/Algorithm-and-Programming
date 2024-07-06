#include <stdio.h>

int main() {
    int N; 

    scanf("%d", &N);
    int A[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int count[1001] = {0}; 
    for (int i = 0; i < N; i++) {
        count[A[i]]++;
    }

    int maxCount = 0;
    for (int i = 1; i <= 1000; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
        }
    }
    printf("%d\n", maxCount);

    return 0;
}
