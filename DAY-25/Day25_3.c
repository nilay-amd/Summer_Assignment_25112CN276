#include<stdio.h>
int main(){
    char a[5][20],t[20];
    int i, j, k, n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s", a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            k = 0;
            while(a[i][k] == a[j][k] && a[i][k] != '\0'){
                k++;
            }

            if(a[i][k] > a[j][k]){
                for(k=0; k<20;k++){
                    t[k] = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = t[k];
                }
            }
        }
    }
    printf("\nSorted names:\n");
    for(i=0;i<n;i++){
        printf("%s\n", a[i]);
    }
    return 0;
}