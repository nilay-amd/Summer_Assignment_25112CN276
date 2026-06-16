#include<stdio.h>
int  isArmstrong(int n){
    int original = n , sum = 0, digit;
    while(n>0){
        digit = n % 10;
        sum = sum + (digit*digit*digit);
        n = n/10;
    }
    return(sum == original);
}
    int main(){
        int num;
        printf("Enter a number:");
        scanf("%d",&num);
        if(isArmstrong(num))
            printf("Armstrong Number");
        else
            printf("Not a Armastrong Number");

            return 0;
    }
        