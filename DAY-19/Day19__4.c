#include <stdio.h>
int main(){
    int n, i, j;
    int sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum = sum + A[i][i];   
    }
    printf("Sum of diagonal elements = %d", sum);
    return 0;
}