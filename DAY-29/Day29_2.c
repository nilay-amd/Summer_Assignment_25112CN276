#include<stdio.h>
int main(){
    int a[100],n=0,i,ch,x,pos;
    while(1){
        printf("\n1.Insert\n2.Display\n3.Search\n4.Delete\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter number: ");
                scanf("%d", &a[n]);
                n++;
                break;
            case 2: // Display
                for(i=0;i<n;i++)
                    printf("%d ", a[i]);
                break;
            case 3: // Search
                printf("Enter element to search: ");
                scanf("%d",&x);
                for(i=0;i<n;i++){
                    if(a[i]==x){
                        printf("Found at position %d\n", i);
                        break;
                    }
                }
                if(i==n)
                    printf("Not found\n");
                break;
            case 4: // Delete
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if(pos>=0&&pos<n){
                    for(i=pos;i<n-1;i++){
                        a[i] = a[i+1];
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