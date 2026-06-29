#include<stdio.h>
int main(){
    int id[50],qty[50],n=0;
    int ch, i, x, pos;
    while(1){
        printf("\n1.Add Item\n2.Display\n3.Search\n4.Delete\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: // Add item
                printf("Enter Item ID: ");
                scanf("%d", &id[n]);
                printf("Enter Quantity: ");
                scanf("%d", &qty[n]);
                n++;
                break;
            case 2: // Display
                for(i=0;i<n;i++){
                    printf("ID: %d  Qty: %d\n", id[i], qty[i]);
                }
                break;
            case 3: // Search
                printf("Enter ID to search: ");
                scanf("%d", &x);
                for(i=0;i<n;i++){
                    if(id[i]==x){
                        printf("Found -> Qty: %d\n", qty[i]);
                        break;
                    }
                }
                if(i==n)
                    printf("Not found\n");
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if(pos>=0&&pos<n){
                    for(i=pos;i<n-1;i++){
                        id[i] = id[i+1];
                        qty[i] = qty[i+1];
                    }
                    n--;
                    printf("Deleted\n");
                } else{
                    printf("Invalid position\n");
                }
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}