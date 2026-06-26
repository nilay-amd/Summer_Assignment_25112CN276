#include<stdio.h>
int main(){
    int age, i, n;
    printf("Enter number of people: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){                                    //for multiple no of people
        printf("\nEnter age of person %d: ", i);
        scanf("%d",&age);
        if(age >= 18)
            printf("Eligible to vote\n");
        else
            printf("Not eligible to vote\n");
    }
    return 0;
}