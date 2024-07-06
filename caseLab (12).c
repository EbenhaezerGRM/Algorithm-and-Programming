// cara pertama
// #include <stdio.h>
// #include <string.h>

// void fibonacciString(int n, char s0, char s1, char result[10000]){
//     if(n == 0){
//         result[0] = s0;
//         result[1] = '\0';
//     }
//     else if(n == 1){
//         result[0] = s1;
//         result[1] = '\0';
//     } 
//     else{
//         char prev1[10000];
//         char prev2[10000];
//         fibonacciString(n - 1, s0, s1, prev1);
//         fibonacciString(n - 2, s0, s1, prev2);
        
//         strcpy(result, prev1);
//         strcat(result, prev2);
//     }
// }

// int main() {
//     int T;
//     scanf("%d", &T);

//     for(int i = 1; i <= T; i++){
//         int n;
//         char s0, s1;
//         scanf("%d %c %c", &n, &s0, &s1);

//         char result[10000];
//         fibonacciString(n, s0, s1, result);

//         printf("Case #%d: %s\n", i, result);
//     }
//     return 0;
// }

// cara kedua
// #include <stdio.h>

// void fibonacciString(int n, char s0, char s1){
//     if(n == 0){
// 		printf("%c", s0);
// 	}
//     else if(n == 1){
//         printf("%c", s1);
//     } 
//     else{
// 		fibonacciString(n-1, s0, s1);
// 		fibonacciString(n-2, s0, s1);
//     }
// }

// int main() {
//     int T;
//     scanf("%d", &T);

//     for(int i = 1; i <= T; i++){
//         int n;
//         char s0, s1;
//         scanf("%d %c %c", &n, &s0, &s1);

//         printf("Case #%d: ", i);
//         fibonacciString(n, s0, s1);
//         printf("\n");
//     }
//     return 0;
// } 

// fibonacci recursive
// #include <stdio.h>

// int fibbonaci(int n){
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     else{
//         return fibbonaci(n-1) + fibbonaci(n-2);
//     }
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d", fibbonaci(n));
//     return 0;
// }