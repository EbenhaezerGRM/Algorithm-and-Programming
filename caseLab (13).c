// #include <stdio.h>
// #include <string.h>

// #define MAX 101

// char field[MAX][MAX];
// char tempField[MAX][MAX];

// void spreadFire(int N, int M) {
//     while (M > 1) {
//         memcpy(tempField, field, sizeof(field));

//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < N; j++) {
//                 if (field[i][j] == 'F') {
//                     for (int x = i-1; x <= i + 1; x++) {
//                         for (int y = j-1; y <= j + 1; y++) {
//                             if (x >= 0 && x < N && y >= 0 && y < N) {
//                                 tempField[x][y] = 'F';
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//         M--;
//         memcpy(field, tempField, sizeof(field));
//     }
// }

// int main() {
//     int T, N, M;
//     FILE *file = fopen("testdata.in", "r");
//     if (file == NULL) {
//         printf("Failed to open the file.\n");
//         return 1;
//     }

//     fscanf(file, "%d", &T);
//     for (int t = 1; t <= T; t++) {
//         fscanf(file, "%d %d", &N, &M);

//         for (int i = 0; i < N; i++) {
//             fscanf(file, "%s", field[i]);
//         }

//         spreadFire(N, M);

//         printf("Case #%d:\n", t);
//         for (int i = 0; i < N; i++) {
//             printf("%s\n", field[i]);
//         }
//         printf("\n");
//     }

//     fclose(file);
//     return 0;
// }

// #include <stdio.h>

// void fireSpread(char map[][105], int time, int x, int y, int boundary) {
//     if (time <= 0 || map[y][x] == 'F') return;
//     if (x < 0 || x >= boundary || y < 0 || y >= boundary) return;

//     map[y][x] = 'F';
//     time--;

//     fireSpread(map, time, x-1, y-1, boundary);
//     fireSpread(map, time, x-1, y+1, boundary);
//     fireSpread(map, time, x+1, y-1, boundary);
//     fireSpread(map, time, x+1, y+1, boundary);
//     fireSpread(map, time, x+1, y, boundary);
//     fireSpread(map, time, x-1, y, boundary);
//     fireSpread(map, time, x, y+1, boundary);
//     fireSpread(map, time, x, y-1, boundary);
// }

// void printMap(char map[][105], int boundary) {
//     for (int i = 0; i < boundary; i++) {
//         printf("%s\n", map[i]);
//     }
// }

// int main() {
    
//     int t, n, m, x, y;
//     char map[105][105];

//     FILE *fptr;
//     fptr = fopen("testdata.in", "r");

//     fscanf(fptr, "%d\n", &t);
//     for (int i = 1; i <= t; i++) {
//         fscanf(fptr, "%d %d\n", &n, &m);
//         for (int j = 0; j < n; j++) {
//             for (int k = 0; k < n; k++) {
//                 fscanf(fptr, "%c", &map[j][k]); 
//                 if (map[j][k] == 'F') {
//                     x = k;
//                     y = j;
//                     map[j][k] = '#';
//                 }
//             }
//             fgetc(fptr); // ngambil \n
//         }

//         fireSpread(map, m, x, y, n);

//         printf("Case #%d:\n", i);
//         printMap(map, n);
//             puts("");    
//     }
//     fclose(fptr);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

#define MAX 101

char field[MAX][MAX];
char tempField[MAX][MAX];

void spreadFire(int N, int M) {
    while (M > 1) {
      memcpy(tempField, field, sizeof(field));
      for (int i = 0; i < N; i++) {
          for (int j = 0; j < N; j++) {
              if (field[i][j] == 'F') {
                if(i > 0 && j > 0) tempField[i-1][j-1] = 'F';
                if(i > 0 && j < N-1) tempField[i-1][j+1] = 'F';
                if(i < N-1 && j > 0) tempField[i+1][j-1] = 'F';
                if(i < N-1 && j < N-1) tempField[i+1][j+1] = 'F';
                if(i < N-1) tempField[i+1][j] = 'F';
                if(i > 0) tempField[i-1][j] = 'F';
                if(j < N-1) tempField[i][j+1] = 'F';
                if(j > 0) tempField[i][j-1] = 'F';
              }
          }
      }
      M--;
      memcpy(field, tempField, sizeof(field));
    }
}

int main() {
    int T, N, M;
    FILE *file = fopen("testdata.in", "r");
    fscanf(file, "%d", &T);
    for (int t = 1; t <= T; t++) {
        fscanf(file, "%d %d", &N, &M);

        for (int i = 0; i < N; i++) {
            fscanf(file, "%s", field[i]);
        }

        spreadFire(N, M);

        printf("Case #%d:\n", t);
        for (int i = 0; i < N; i++) {
            printf("%s\n", field[i]);
        }
        printf("\n");
    }

    fclose(file);
    return 0;
}