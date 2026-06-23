#include<stdio.h>
int main(){
    int n1, n2, i, j,k = 0,found;

    printf("Enter size of first array: ");
    scanf("%d",&n1);

    int arr1[n1];
    printf("Enter elements of first array:");
    for(i = 0;i < n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2], unionarr[n1+n2];
    printf("Enter elements of second array:");
    for(i = 0;i < n2;i++){
        scanf("%d",&arr2[i]);
    }

    for(i = 0;i < n1;i++){
        unionarr[k++] = arr1[i];
    }
    for(i = 0;i < n2;i++){
        found = 0;
        for(j = 0;j < k;j++){
            if(arr2[i] == unionarr[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            unionarr[k++] = arr2[i];
        }
    }
    printf("Union of arrays:\n");
    for(i = 0;i < k;i++){                                  // output 
        printf("%d ", unionarr[i]);
    }
    return 0;
}