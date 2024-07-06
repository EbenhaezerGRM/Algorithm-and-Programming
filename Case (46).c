#include <stdio.h>

int max (int a, int b){
    return (a >= b) ? a: b;
}

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int n, m;
        scanf("%lld %lld", &n, &m);
        long long int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &arr[j]);
        }
        long long int maxlen = -1, idx = 0, sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum+=arr[j];
            if (sum <= m) {
                maxlen = max(maxlen, j-idx+1);   
            } else if (sum > m) {
                while (sum > m) {
                    sum-=arr[idx++];
                }
            }
        }
        printf("Case #%d: %lld\n", i+1, maxlen);
    }
    
}