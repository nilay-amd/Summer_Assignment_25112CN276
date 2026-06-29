#include <stdio.h>
int main(){
    int ch, id[50],i,n=0,s,f=0;
    while(1){
        printf("\n--- Library Menu ---\n");
        printf("1. Add book ID\n");
        printf("2. Display books\n");
        printf("3. Search book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if(ch==1){
            printf("Enter book ID: ");
            scanf("%d", &id[n]);
            n++;
        }
        else if(ch==2){
            printf("Book IDs:\n");
            for(i=0;i<n;i++){
                printf("%d\n", id[i]);
            }
        }
        else if(ch==3){
            printf("Enter ID to search: ");
            scanf("%d", &s);
            f = 0;
            for(i=0;i<n;i++){
                if(id[i]==s){
                    f = 1;
                    break;
                }
            }
            if(f==1)
                printf("Book Found\n");
            else
                printf("Book Not Found\n");
        }
        else if(ch==4){
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}