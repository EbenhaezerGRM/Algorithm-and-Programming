//OK

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int view[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &view[i]);
    }

    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        int sum = 0;
        int first = 0;
        int last = 0;

        scanf("%d %d", &first, &last);
        printf("Case #%d: ", i + 1);

        for(int j = first - 1; j < last; j++){
            sum += view[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
