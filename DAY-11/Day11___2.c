#include <stdio.h>
int max(int a, int b){
    return (a>b)?a:b;
}
int main(){
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = max(x, y);

    printf("Maximum = %d", result);

    return 0;
} 