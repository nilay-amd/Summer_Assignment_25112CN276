#include<stdio.h>
int main(){
    int n, i, j = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){                        // store non-zero elements first
        if(arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }
    while(j < n){                                   // fill remaining with zeros
        temp[j++] = 0;
    }

    printf("After moving zeroes:\n");
    for(i = 0; i < n; i++){
        printf("%d ", temp[i]);
    }

    return 0;
}