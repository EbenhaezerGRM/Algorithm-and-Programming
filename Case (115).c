#include <stdio.h>

int main() {
    char n[11];
    char m[100];
    char c[10];
    int o;

    scanf("%s", &n); 
    scanf(" %[^\n]", &m);
    scanf("%s %d", &c, &o); 

    printf("Id    : %s\n", n);
    printf("Name  : %s\n", m);
    printf("Class : %s\n", c);
    printf("Num   : %d\n", o);

    return 0;
}
