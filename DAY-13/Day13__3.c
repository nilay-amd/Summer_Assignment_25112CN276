#include<stdio.h>
int main(){
    int arr[100], n;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");                //input
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);                        //output
    printf("Smallest = %d\n", smallest);

    return 0;
}