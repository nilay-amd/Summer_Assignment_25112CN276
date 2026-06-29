#include<stdio.h>
int main(){
    int ch,t=50,b;
    while(1){
        printf("\n--- Ticket Menu ---\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Tickets\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if(ch==1){
            printf("Enter number of tickets: ");
            scanf("%d", &b);
            if(b <= t){
                t = t - b;
                printf("Booking successful!\n");
            } else{
                printf("Not enough tickets available!\n");
            }
        }
        else if(ch==2){
            printf("Available tickets: %d\n", t);
        }
        else if(ch==3){
            break;
        }
        else{
            printf("Invalid choice\n");
        }
    }
    return 0;
}