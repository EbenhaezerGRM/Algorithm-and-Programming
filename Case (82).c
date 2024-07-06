#include <stdio.h>

int main() {
    char u[100];
    char n[9];
    int a;

    scanf(" %[^\n]", &u);
    scanf("%s %d", &n, &a); 

    printf("Name: %s\n", u);
    printf("NIS: %s\n", n);
    printf("Age: %d\n", a);

    return 0;
}
