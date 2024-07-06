#include <stdio.h>

int max(int a, int b) {
    return (a >= b )? a : b;
}

int main(){
    int t;
    scanf("%d", &t);
    long long int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int n;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        long long int x;
        scanf("%lld", &x);
        long long int sum = 0, maxlen = -1, idx = 0;
        for (int j = 0; j < t; j++)
        {
            sum+=arr[j];
            if (sum <= x) {
                maxlen = max(maxlen, j-idx+1);
            } else if (sum > x) {
                while (sum > x){
                    sum-=arr[idx++];
                }
            }
        }
        printf("Case #%d: %lld\n", i+1, maxlen);
    }
    
}