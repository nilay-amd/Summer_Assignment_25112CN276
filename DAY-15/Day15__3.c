#include<stdio.h>
int main(){
    int n, i, last;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

   last = arr[n - 1];                          // store last element

   for(i = n - 1; i > 0; i--){                // shift elements right
        arr[i] = arr[i - 1];
    }

   arr[0] = last;                               // place last at first

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}