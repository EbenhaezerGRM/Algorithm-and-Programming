#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int N) { 
    if(N <= 1){
        return false;
    }
    for(int i = 2; i * i <= N; i++){ 
        if (N % i == 0){ 
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        
        int isSquare = (sqrt(num) == (int)sqrt(num));
        int isCubic = (cbrt(num) == (int)cbrt(num));
        int isPrimeNum = isPrime(num);
        
        printf("Case #%d : ", i);
        
        if(isSquare && isCubic){
            printf("square cubic\n");
        }
        else if(isSquare){
            printf("square\n");
        }
        else if(isCubic){
            printf("cubic\n");
        } 
        else if(isPrimeNum){
            printf("prime\n");
        } 
        else{
            printf("none\n");
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// int isPrime(int num) {
//     if(num <= 1){
//         return 0;
//     }
//     if(num <= 3){
//         return 1;
//     }
//     if(num % 2 == 0 || num % 3 == 0){
//         return 0;
//     }

//     for(int i = 5; i * i <= num; i += 6){
//         if (num % i == 0 || num % (i + 2) == 0){
//             return 0;
//         }
//     } 
//     return 1;
// }

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     for(int i = 1; i <= n; i++){
//         int num;
//         scanf("%d", &num);
        
//         int isSquare = (sqrt(num) == (int)sqrt(num));
//         int isCubic = (cbrt(num) == (int)cbrt(num));
//         int isPrimeNum = isPrime(num);
        
//         printf("Case #%d : ", i);
        
//         if(isSquare && isCubic){
//             printf("square cubic\n");
//         }
//         else if(isSquare){
//             printf("square\n");
//         }
//         else if(isCubic){
//             printf("cubic\n");
//         } 
//         else if(isPrimeNum){
//             printf("prime\n");
//         } 
//         else{
//             printf("none\n");
//         }
//     }
//     return 0;
// }

