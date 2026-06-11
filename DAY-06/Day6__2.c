#include<stdio.h>
int main(){
    int n, r, dec = 0, base = 1;

    printf("Enter a binary number:");
    scanf("%d", &n);

    while (n > 0){
        r = n % 10;
        dec = dec + r * base;
        base = base * 2;
        n = n / 10;
    }
    printf("Decimal = %d", dec);

    return 0;
}