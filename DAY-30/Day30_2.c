#include<stdio.h>
int main(){
    int id[50],n=0,ch,i,x;
    char book[50][30];
    while(1){
        printf("\n1.Add Book\n2.Display\n3.Search\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: // Add book
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);
                printf("Enter Book Name: ");
                scanf("%s", book[n]);
                n++;
                break;
            case 2: // Display
                for(i=0;i<n;i++){
                    printf("ID: %d  Book: %s\n", id[i], book[i]);
                }
                break;
            case 3: 
                printf("Enter Book ID to search: ");
                scanf("%d", &x);
                for(i=0;i<n;i++){
                    if(id[i]==x){
                        printf("Found -> Book: %s\n", book[i]);
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