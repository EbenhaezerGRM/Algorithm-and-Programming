#include <stdio.h>
#include <math.h>

long long smallestBinSearch(long long M) {
    long long left = 1, right = 2, sum = 1;

    while (sum < M) {
        right+=10;
        sum = (right*(right+1)*(2*right+1))/6;
    }

    while (left < right) {
        long long mid = (left + right)/2;
        sum = (mid*(mid+1)*(2*mid+1))/6;
        if (sum < M) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}


int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        scanf("%lld", &m);
        printf("Case #%d: %lld\n", i+1, smallestBinSearch(m));
    }
    
}