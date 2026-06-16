#include<stdio.h>
void fibonacci(int n){
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);

    for (int i = 3; i <= n; i++){
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}
int main(){
    int n=0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}