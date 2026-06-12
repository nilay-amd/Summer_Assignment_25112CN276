#include <stdio.h>
int main(){
    int n = 5, i, j;

    for(i = 1; i <= n; i++){

        for(j = i; j < n; j++){
            printf(" ");
        }

        for(j = 1; j <= i; j++){                  // increasing numbers
            printf("%d", j);
        }
        for(j = i - 1; j >= 1; j--){              // decreasing numbers
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}