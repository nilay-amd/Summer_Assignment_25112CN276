#include<stdio.h>
int main(){
    int start, end, i, j;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++){
        if (i <= 1)
            continue;

        for (j = 2; j * j <= i; j++){
            if (i % j == 0)
                break;
        }

        if (j * j > i)
            printf("%d ", i);
    }

    return 0;
}