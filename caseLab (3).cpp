#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf(" %c", &arr[i][j]); 
        }    
    }
    
    for(int i = n - 1; i >= 0; i--){ 
        for (int j = n - 1; j >= 0; j--){ 
            printf("%c", arr[i][j]);
        }    
        printf("\n"); 
    }
    
    return 0;
}

