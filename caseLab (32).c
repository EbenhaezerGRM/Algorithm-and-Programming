#include <stdio.h>

int count_lightning(int total, int min, int max, char suara[]){
    int count = 0;
    int current_duration = 0;

    for(int j = 0; j < total; j++){
        if(suara[j] == '1'){
            current_duration++;
        } 
        else{
            if(current_duration >= min && current_duration <= max){
                count++;
            }
            current_duration = 0;
        }
    }

    if(current_duration >= min && current_duration <= max){
        count++;
    }
    return count;
}

int main(){

    FILE *file;
    file = fopen("testdata.in", "r");

    int n;
    fscanf(file, "%d", &n);

    for(int i = 0; i < n; i++){
        int total, min, max;
        fscanf(file, "%d %d %d", &total, &min, &max);

        char suara[total + 1];
        fscanf(file, "%s", suara);

        int result = count_lightning(total, min, max, suara);
        printf("Case #%d: %d\n", i + 1, result);
    }
    fclose(file);
    return 0;
}
