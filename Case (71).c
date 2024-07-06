#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortGrid(char** grid, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (grid[i][k] > grid[i][k + 1]) {
                    char temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            if (strcmp(grid[j], grid[j + 1]) < 0) {
                char* temp = grid[j];
                grid[j] = grid[j + 1];
                grid[j + 1] = temp;
            }
        }
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    char** grid = (char**)malloc(rows * sizeof(char*));
    for (int i = 0; i < rows; i++) {
        grid[i] = (char*)malloc((cols + 1) * sizeof(char));
        scanf("%s", grid[i]);
    }

    sortGrid(grid, rows, cols);

    for (int i = 0; i < rows; i++) {
        printf("%s\n", grid[i]);
    }

    for (int i = 0; i < rows; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}
