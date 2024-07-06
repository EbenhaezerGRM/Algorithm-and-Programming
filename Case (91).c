#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int binarySearch(int arr[], int left, int right, int height) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == height)
            return mid + 1;

        if (arr[mid] < height)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; 
}

int main() {
    int N, Q;
    scanf("%d", &N);
    int heights[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }

    mergeSort(heights, 0, N - 1);

    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) {
        int height;
        scanf("%d", &height);

        int position = binarySearch(heights, 0, N - 1, height);

        printf("%d\n", position);
    }
    return 0;
}
