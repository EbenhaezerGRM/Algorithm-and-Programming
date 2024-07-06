#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 21
#define MAX_ID_LENGTH 11

typedef struct {
    char id[MAX_ID_LENGTH];
    char name[MAX_NAME_LENGTH];
} Student;

void bubbleSort(Student arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j].id, arr[j+1].id) > 0) {
            
                Student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n);

    Student *students = malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%s %s", students[i].id, students[i].name);
    }

    fclose(file);

    bubbleSort(students, n);

    for (int i = 0; i < n; i++) {
        printf("%s %s\n", students[i].id, students[i].name);
    }

    free(students);

    return 0;
}
