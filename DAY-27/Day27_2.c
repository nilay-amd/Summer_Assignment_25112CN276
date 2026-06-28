#include <stdio.h>
struct emp{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct emp e[100];
    int n = 0, ch, i, id, f;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Search by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if(ch == 1){
            printf("Enter ID: ");
            scanf("%d", &e[n].id);
            printf("Enter Name: ");
            scanf("%s", e[n].name);
            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);
            n++;
            printf("Employee Added!\n");
        }
        else if(ch==2){
            printf("\n--- Employee List ---\n");
            for(i=0;i<n;i++){
                printf("ID: %d  Name: %s  Salary: %.2f\n",
                       e[i].id, e[i].name, e[i].salary);
            }
        }
        else if(ch == 3){
            printf("Enter ID to search: ");
            scanf("%d", &id);
            f = 0;
            for(i=0;i<n;i++){
                if(e[i].id==id){
                    printf("Found -> ID: %d Name: %s Salary: %.2f\n",
                           e[i].id, e[i].name, e[i].salary);
                    f = 1;
                }
            }

            if(f == 0)
                printf("Employee not found in database\n");
        }

    } while(ch != 4);
    return 0;
}