// #include <stdio.h>
// #include <string.h>

// int main(){
//     int tc;
//     scanf("%d", &tc);

//     for(int i = 0; i < tc; i++){
//         char words[1001];
//         getchar();
//         scanf("%[^\n]", words);
//         int len = strlen(words);

//         printf("Case #%d: ", i + 1);

//         for(int j = 0; j < len; j++){
//             if(words[j] == 97 || words[j] == 105 || words[j] == 117 || words[j] == 101 || words[j] == 111){
//                 printf("");
//             }
//             else if(words[j] == 65 || words[j] == 73 || words[j] == 85 || words[j] == 69 || words[j] == 79){
//                 printf("");
//             }
//             else{
//                 printf("%c", words[j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        char words[1001];
        getchar();
        scanf("%[^\n]", words);
        int len = strlen(words);

        printf("Case #%d: ", i + 1);

        for (int j = 0; j < len; j++) {
            char currentChar = words[j];
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u' ||
                currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U') {
            } else {
                printf("%c", currentChar);
            }
        }
        printf("\n");
    }
    return 0;
}
