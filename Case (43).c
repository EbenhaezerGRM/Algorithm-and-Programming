// CARA 1 (DI CASE GANJIL GENAP SALAH, TAPI JAWABAN BENER)

// #include <stdio.h>

// int main(){
//     int T;
//     long int N, M;

//     scanf("%d", &T);

//     for(int i = 1; i <= T; i++){
//         scanf("%ld %ld", &N, &M);
//         printf("Case #%d: ", i);

//         if((N * M) % 2 == 1){
//             printf("Need more frogs\n");
//         }
//         else{
//             printf("Party time!\n");
//         }
//     }

//     return 0;
// }

// CARA 2 (DI CASE GANJIL GENAP SALAH, TAPI JAWABAN BENER)

// #include <stdio.h>

// int main(){
//     int T;
//     long int N, M;

//     scanf("%d", &T);

//     for(int i = 1; i <= T; i++){
//         scanf("%ld %ld", &N, &M);
//         printf("Case #%d: ", i);

//         if((N * M) % 2 == 0){
//             printf("Party time!\n");
//         }
//         else{
//             printf("Need more frogs\n");
//         }
//     }

//     return 0;
// }

// CARA 3 (DI CASE GANJIL GENAP SALAH, TAPI JAWABAN BENER)

// #include <stdio.h>

// int main(){
//     int T;
//     long int N, M;

//     scanf("%d", &T);

//     for(int i = 1; i <= T; i++){
//         scanf("%ld %ld", &N, &M);
//         printf("Case #%d: ", i);

//         if((N * M) & 1){
//             printf("Need more frogs\n");
//         }
//         else{
//             printf("Party time!\n");
//         }
//     }

//     return 0;
// }

// CARA 4 (CASE GANJIL GENAP BENAR, TAPI BELUM DISUBMIT)

#include <stdio.h>

int main(){
    int T;
    long int N, M;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%ld %ld", &N, &M);
        printf("Case #%d: ", i);

        if((N % 2 == 0) && (M % 2 == 0)){
            printf("Party time!\n");
        }
        else{
            printf("Need more frogs\n");
        }
    }

    return 0;
}