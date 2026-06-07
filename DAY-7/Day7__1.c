#include<stdio.h>
long long factorial(int n){
    if (n == 0)   
        return 1;
    else
        return n * factorial(n - 1); 
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial not possible for negative numbers");
    else
        printf("Factorial = %lld", factorial(num));

    return 0;
}