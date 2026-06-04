#include<stdio.h>
int main(){
    int start, end, i, num, sum, rem;     //num--copy of original number
                                          //rem--stores last digit of number

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers are: ");

    for (i = start; i <= end; i++) {
        num = i;    
        sum = 0;

        while (num > 0) {
            rem = num % 10;            // get last digit
            sum = sum + rem * rem * rem; // cube and add
            num = num / 10;            // remove last digit
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}