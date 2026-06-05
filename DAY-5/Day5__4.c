#include <stdio.h>
int main(){
    int n, i, max = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            int j, isPrime = 1;

            for (j = 2; j < i; j++){
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
                max = i;
        }
    }

    printf("Largest prime factor = %d", max);

    return 0;
}