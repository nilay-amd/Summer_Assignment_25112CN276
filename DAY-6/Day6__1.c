#include<stdio.h>
int main(){
    int n, i = 0, b[32];

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0){
        printf("Binary= 0");
        return 0;
    }
    while (n > 0){
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary= ");
    while (i > 0) {
        printf("%d", b[i - 1]);
        i--;
    }

    return 0;
}