#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubbleSort(int arr[], int n, int x) {
    int i, j, totalTime = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                totalTime += x;
            }
        }
    }
    return totalTime;
}

int main() {
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        int n, x, j;
        scanf("%d %d", &n, &x);
        int arr[n];
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        int totalTime = bubbleSort(arr, n, x);
        printf("Case #%d: %d\n", i, totalTime);
    }
    return 0;
}
