#include<stdio.h>
int isPalindrome(int n){
    int original = n;
    int reverse = 0;
    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (original == reverse)
        return 1;   // palindrome
    else
        return 0;   // not a palindrome
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}