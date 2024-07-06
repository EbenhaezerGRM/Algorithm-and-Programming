#include <stdio.h>

int main(){
    int  x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    
    if((y - k) == (k - x) && (y - k) >= 0 && (k - x) >= 0){
        printf("%d\n", y - k);
    }
    else{
        printf("-1\n");
    }
    return 0;
}