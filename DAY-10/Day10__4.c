#include <stdio.h>
int main(){
    int n = 5, i, j;

    for(i = 1; i <= n; i++){

        for(j = i; j < n; j++){
            printf(" ");
        }

        for(j = 1; j <= i; j++){                     // characters
            printf("%c", 'A' + j - 1);
        }
        for(j = i - 1; j >= 1; j--){
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}