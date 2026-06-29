#include <stdio.h>
int main(){
    int ch;
    float bal=0,amt;
    while(1){
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check blance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if(ch==1){
            printf("Enter amount: ");
            scanf("%f", &amt);
            bal = bal + amt;
            printf("Deposited!\n");
        }
        else if(ch==2){
            printf("Enter amount: ");
            scanf("%f", &amt);
            if(amt <= bal){
                bal = bal-amt;
                printf("Withdrawn!\n");
            } else{
                printf("Insufficient balance!\n");
            }
        }
        else if(ch==3){
            printf("Balance = %.2f\n", bal);
        }
        else if(ch==4){
            break;
        }
        else{
            printf("Invalid choice\n");
        }
    }
    return 0;
}