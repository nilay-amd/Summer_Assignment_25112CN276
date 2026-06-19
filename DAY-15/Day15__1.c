#include<stdio.h>
int main(){
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n],rev[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        rev[i] = arr[n - i - 1];
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", rev[i]);
    }

    return 0;
}