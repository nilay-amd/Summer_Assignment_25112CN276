#include<stdio.h>
struct emp{
    int id;
    char name[20];
    int sal;
};
int main(){
    struct emp e[50];
    int n=0,ch,i,x;
    while(1){
        printf("\n1.Add Employee\n2.Display\n3.Search\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: // Add
                printf("Enter ID: ");
                scanf("%d", &e[n].id);
                printf("Enter Name: ");
                scanf("%s", e[n].name);
                printf("Enter Salary: ");
                scanf("%d", &e[n].sal);
                n++;
                break;
            case 2: // Display
                for(i=0;i<n;i++){
                    printf("ID: %d Name: %s Salary: %d\n",
                           e[i].id, e[i].name, e[i].sal);
                }
                break;
            case 3: // Search
                printf("Enter ID to search: ");
                scanf("%d", &x);
                for(i=0;i<n;i++){
                    if(e[i].id==x){
                        printf("Found -> Name: %s Salary: %d\n",
                               e[i].name, e[i].sal);
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