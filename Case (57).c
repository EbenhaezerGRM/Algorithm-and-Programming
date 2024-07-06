// #include <stdio.h>
// #include <string.h>

// int main(){
//     int T;

//     scanf("%d", &T);
//     char S[T][100001];

//     for(int i = 0; i < T; i++){
//         scanf("%s", S[i]);

//         int beda = 0;
//         for(int j = 0; j < strlen(S[i]); j++){
//             for(int k = j + 1; k < strlen(S[i]); k++){
//                 if(S[i][j] > S[i][k]){
//                     char temp = S[i][j];
//                     S[i][j] = S[i][k];
//                     S[i][k] = temp;
//                 }
//             }     
//             if(S[i][j] != S[i][j-1]){
//                 beda++;
//             }
//         }
//         printf("Case #%d: ", i + 1);
//         if(beda % 2 == 0){
//             printf("Yay\n");
//         }
//         else{
//             printf("Ewwww\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char S[100001];
        scanf("%s", S);

        int alphabet[26] = {0};
        int len = strlen(S);

        for (int j = 0; j < len; j++) {
            alphabet[S[j] - 'a'] = 1;
        }

        int beda = 0;
        for (int j = 0; j < 26; j++) {
            if (alphabet[j]) {
                beda++;
            }
        }

        printf("Case #%d: ", i + 1);
        if (beda % 2 == 0) {
            printf("Yay\n");
        } else {
            printf("Ewwww\n");
        }
    }

    return 0;
}

