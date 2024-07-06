// Time limit (60)

// #include <stdio.h>

// int main(){
//     int T; 
//     long long int N;
    
//     scanf("%d", &T);

//     for(int i = 1; i <= T; i++){
//         scanf("%lld", &N);

//         long long int arr[N];
        
//         for(int j = 0; j < N; j++){
//             scanf("%lld", &arr[j]);
//         }

//         long long int temp = 0;
//         for(int j = 0; j < N; j++){
//             for(int k = j + 1; k < N; k++){
//                 if(arr[j] < arr[k]){
//                     temp = arr[j];
//                     arr[j] = arr[k];
//                     arr[k] = temp;
//                 }
//             }
//         }
//         printf("Case #%d: %lld\n", i, arr[0] + arr[1]);
//     }
//     return 0;
// }

// Time limit (70)

#include <stdio.h>

int main(){
    int T;
    long long int N;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%lld", &N);

        long long int arr[N];

        for (int j = 0; j < N; j++){
            scanf("%lld", &arr[j]);
        }

        for (int j = 1; j < N; j++){
            long long int key = arr[j];
            int k = j - 1;
            while(k >= 0 && arr[k] < key){
                arr[k + 1] = arr[k];
                k = k - 1;
            }
            arr[k + 1] = key;
        }

        printf("Case #%d: %lld\n", i, arr[0] + arr[1]);
    }
    return 0;
}
