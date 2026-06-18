#include<stdio.h>
int main(){
    int arr[100],n,key,i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

   
    for(i = 0; i<n; i++){
        if(arr[i] == key){
            printf("Found t position   %d\n", i + 1);
            break;
        }
    }

    if(i == n){
        printf("Not foud\n");
    }

    return 0;
}