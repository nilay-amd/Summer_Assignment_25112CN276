#include<stdio.h>
int main(){
    int ch, pin,p = 1234;   // correct PIN = 1234
    float bal=100,amt;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    if(pin!=p){
        printf("Wrong PIN! Access Denied\n");
        return 0;
    }
    do{
        printf("\n--- ATM Menu ---\n");
        printf("1. Check balance\n");
        printf("2. Deposite\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        if(ch==1){
            printf("Balance = %.2f\n", bal);
        }
        else if(ch==2){
            printf("Enter amount: ");
            scanf("%f", &amt);
            bal = bal + amt;
            printf("Deposited\n");
        }
        else if(ch == 3){
            printf("Enter amount: ");
            scanf("%f",&amt);

            if(amt<=bal){
                bal=bal-amt;
                printf("Withdrawn\n");
            } else {
                printf("Insufficien Balance\n");
            }
        }
    }while(ch != 4);
    return 0;
}