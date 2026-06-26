#include<stdio.h>
int main(){
    char a[5][20],t[20];
    int i, j, k, n, l1, l2;
    printf("Enter number of words: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s", a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            l1 = 0;
            while(a[i][l1] != '\0') l1++;
            l2 = 0;
            while(a[j][l2] != '\0') l2++;

            if(l1>l2){
                // swap
                for(k =0;k<20;k++){
                    t[k] = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = t[k];
                }
            }
        }
    }
    printf("\nSorted by length:\n");
    for(i=0;i<n;i++){
        printf("%s\n", a[i]);
    }
    return 0;
}