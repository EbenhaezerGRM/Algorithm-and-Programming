#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[11];
    int deadline;
} Assignment;

int compare_assignments(const void* a, const void* b) {
    const Assignment* assignment_a = (const Assignment*)a;
    const Assignment* assignment_b = (const Assignment*)b;

    if (assignment_a->deadline == assignment_b->deadline) {
        return strcmp(assignment_a->title, assignment_b->title);
    }

    return assignment_a->deadline - assignment_b->deadline;
}

int main() {
    int N;
    scanf("%d", &N);

    Assignment* assignments = (Assignment*)malloc(N * sizeof(Assignment));

    for (int i = 0; i < N; i++) {
        scanf("%s %d", assignments[i].title, &assignments[i].deadline);
    }

    qsort(assignments, N, sizeof(Assignment), compare_assignments);

    for (int i = 0; i < N; i++) {
        printf("%s\n", assignments[i].title);
    }

    free(assignments);

    return 0;
}
