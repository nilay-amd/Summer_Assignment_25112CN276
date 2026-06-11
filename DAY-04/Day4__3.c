#include<stdio.h>
int main(){
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0){
        rem = temp % 10;          // get last digit
        sum = sum + rem * rem * rem; // cube and add
        temp = temp / 10;         // remove last digit
    }

    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}