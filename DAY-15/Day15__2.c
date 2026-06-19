#include<stdio.h>
int main(){
    int n, i,first;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    first = arr[0];                      // store first element

    for(i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;                 // place first at last
   
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}