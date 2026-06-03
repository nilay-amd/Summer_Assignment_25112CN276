#include <stdio.h>
int main(){
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    i = (a > b) ? a : b;

    while (1) {
        if (i % a == 0 && i % b == 0){
            printf("LCM is: %d\n", i);
            break;
        }
        i++;
    }

    return 0;
}