#include <stdio.h>
#include <string.h>

int main() {
    int testCase; // test case
    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++) {
        int banyakTukar; // banyak yang mau ditukar
        char awal[1001]; // awal
        scanf("%d %s", &banyakTukar, awal);

        for (int j = 0; j < banyakTukar; j++) {
            int indexTukar;
            char iTukar[1001];

            scanf("%d %s", &indexTukar, &iTukar);

            for (int k = indexTukar - 1; k < (strlen(iTukar) + indexTukar - 1) / 2; k++) {
                char temp = awal[k];
                awal[k] = awal[indexTukar - 1 + strlen(iTukar) - (k - (indexTukar - 1))];
                awal[indexTukar - 1 + strlen(iTukar) - (k - (indexTukar - 1))] = temp;
            }
        }

        printf("Case #%d: %s\n", i, awal);
    }

    return 0;
}
