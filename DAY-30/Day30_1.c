#include<stdio.h>
int main(){
    int roll[50],marks[50],n=0;
    char name[50][20];
    int ch,i,r;
    while(1){
        printf("\n1.Add\n2.Display\n3.Search\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: // Add
                printf("Enter Roll: ");
                scanf("%d", &roll[n]);
                printf("Enter Name: ");
                scanf("%s", name[n]);
                printf("Enter Marks: ");
                scanf("%d", &marks[n]);
                n++;
                break;
            case 2: // Display
                for(i=0;i<n;i++){
                    printf("Roll: %d Name: %s Marks: %d\n",
                           roll[i],name[i],marks[i]);
                }
                break;
            case 3: // Search by roll
                printf("Enter roll to search: ");
                scanf("%d", &r);
                for(i=0;i<n;i++){
                    if(roll[i]==r){
                        printf("Found -> Name: %s Marks: %d\n",
                               name[i], marks[i]);
                        break;
                    }
                }
                if(i==n)
                    printf("Not found\n");
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}