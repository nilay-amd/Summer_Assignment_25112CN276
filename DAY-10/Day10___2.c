#include <stdio.h>
int main(){
    int rows = 5, i, j;

    for(i = rows; i >= 1; i--){

        for(j = i; j < rows; j++){                   // print spaces
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++){           // print stars
            printf("*");
        }

        printf("\n");
    }

    return 0;
}