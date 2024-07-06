#include <stdio.h>

int main(){
    char Course_code[15], Course_code2[15], Course_code3[15], Course_code4[15], Course_code5[15];
    int HH, HH2, HH3, HH4, HH5, hh, hh2, hh3, hh4, hh5;
    int MM, MM2, MM3, MM4, MM5, mm, mm2, mm3, mm4, mm5;

    scanf("%s %d:%d-%d:%d\n", Course_code, &HH, &MM, &hh, &mm);
    scanf("%s %d:%d-%d:%d\n", Course_code2, &HH2, &MM2, &hh2, &mm2); 
    scanf("%s %d:%d-%d:%d\n", Course_code3, &HH3, &MM3, &hh3, &mm3);
    scanf("%s %d:%d-%d:%d\n", Course_code4, &HH4, &MM4, &hh4, &mm4);
    scanf("%s %d:%d-%d:%d", Course_code5, &HH5, &MM5, &hh5, &mm5);

    printf("%s %02d:%02d-%02d:%02d\n", Course_code, HH-1, MM, hh-1, mm);
    printf("%s %02d:%02d-%02d:%02d\n", Course_code2, HH2-1, MM2, hh2-1, mm2);
    printf("%s %02d:%02d-%02d:%02d\n", Course_code3, HH3-1, MM3, hh3-1, mm3);
    printf("%s %02d:%02d-%02d:%02d\n", Course_code4, HH4-1, MM4, hh4-1, mm4);
    printf("%s %02d:%02d-%02d:%02d\n", Course_code5, HH5-1, MM5, hh5-1, mm5);

    return 0;
}