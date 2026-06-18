#include<stdio.h>
int main(){
    int arr[100],n,key,count = 0;

    printf("Enter nuber of elements: ");
    scanf("%d", &n);

    sprintf("Enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

   
    printf("Enter element: ");
    scanf("%d", &key);


    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            count++;
        }
    }

   printf("Frequncy = %d\n", count);

    return 0;
}