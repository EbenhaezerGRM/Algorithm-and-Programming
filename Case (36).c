#include <stdio.h>

long long binarySearch(long long *arr, int size, long long target){
    int left = 0;
    int right = size-1;
    int res = -2;

    while (left <= right) {
        int mid = left + (right - left)/2;
        if (arr[mid] <= target) {
            res = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return res;
}

int main(){
    int t;
    scanf("%d", &t);
    long long arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &arr[i]);
        if (i > 0) {
            arr[i]+=arr[i-1];
        }
    }
    
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        long long a;
        scanf("%lld", &a);
        long long x;
        x = binarySearch(arr, t, a);
        printf("Case #%d: %lld\n", i+1, x + 1);
    }
    
    
}