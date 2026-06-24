#include<stdio.h>
int main(){
    int a[10][10], i, j, n, isSymmetric = 1;
    printf("Enter order of square matrix: ");
    scanf("%d",&n);
    printf("Enter elements of matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j] != a[j][i]){
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric==0)
            break;
    }
    if(isSymmetric)
        printf("Matrix is Symmetrical\n");
    else
        printf("Matrix is Not Symmetrical\n");
    return 0;
}