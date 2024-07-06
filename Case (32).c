#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("B_searching.txt", "r");

    int n;
    fscanf(fp, "%d", &n);

    char nim[n][21];
    char name[n][101];

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %s", nim[i], name[i]);
    }

    int x;
    fscanf(fp, "%d", &x);

    char nim_x[x][21];

    for (int i = 0; i < x; i++) {
        fscanf(fp, "%s", nim_x[i]);
        for (int j = 0; j < n; j++) {
            if (strcmp(nim_x[i], nim[j]) == 0) {
                printf("%s\n", name[j]);
                printf("%s\n", nim[j]);
            }
        }
        printf("\n");
    }

    fclose(fp);

    return 0;
}
