#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

       //euclidean algorithm
    while (b != 0){
        a = a % b;

        if (a == 0){
            a = b;
            break;
        }

        b = b % a;    //process is repeated
    }

    printf("GCD is: %d\n", a);

    return 0;
}