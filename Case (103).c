#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    int arr[n][n];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int kurang = 0;
    // for(int i = 0; i <= n; i++){
        int angkaSama = 0;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(arr[j][k] == arr[k][j + 1]){
                    angkaSama++;
                }
            }
        // }
        // if(i > 0){
        //     if(angkaSama < n){
        //         kurang++;
        //     }
        // }
    } 
    printf("%d\n", angkaSama);
    return 0;
}