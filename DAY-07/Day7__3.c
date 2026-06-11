#include<stdio.h>
int Digits_sum(int n){
    if (n == 0)
        return 0; 
    else
        return (n % 10) + Digits_sum(n / 10);  // recursive call
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;   // for negative numbers

    printf("Sum of digits = %d", Digits_sum(num));

    return 0;
}