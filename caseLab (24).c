#include <stdio.h>

int sort(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == max){
			count++;
		}
	}
	return count;
}

int main(){
    int tc;
    scanf("%d", &tc);
    
    for(int i = 0; i < tc; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
		printf("Case #%d: %d\n", i + 1, sort(arr, n));
    }
    return 0;
}
