#include <stdio.h>

int main(){
    int T;
    int totalItem;
    int Money;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){

        scanf("%d %d", &totalItem, &Money);
        int itemPrice[totalItem];
        double totalPrice = 0;
            
        for(int j = 0; j < totalItem; j++){
            scanf("%d", &itemPrice[j]);
            totalPrice += itemPrice[j];
        }
        
        printf("Case #%d: ", i);

        if(totalPrice > Money){
            printf("Wash dishes\n");
        }
        else{
            printf("No worries\n");
        }
    }   
    return 0;
}