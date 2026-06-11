#include<stdio.h>
int main(){
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1){
        printf("Not Prime");
        return 0;     //To stop the program immediately after printing not prime otherwise loop will continue
    }

    for (i = 2; i < n; i++){
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");

    return 0;
}