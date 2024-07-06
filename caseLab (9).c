#include <stdio.h>

int leftBinarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid-1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int q[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &q[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", leftBinarySearch(arr, n, q[i]) == -1 ? -1 : leftBinarySearch(arr, n, q[i])+1);
    }

    return 0; 
}