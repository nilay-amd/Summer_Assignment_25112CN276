#include<stdio.h>
struct student{
    int id;
    char name[50];
    float marks;
};
int main(){
    struct student s[100];
    int n = 0, ch, i, id, f;
    do {
        printf("\n--- Student record system ---\n");
        printf("1. Add student\n");
        printf("2. Display all\n");
        printf("3. Search by id\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if(ch==1){
            printf("Enter ID: ");
            scanf("%d", &s[n].id);
            printf("Enter name: ");
            scanf("%s", s[n].name);
            printf("Enter marks: ");
            scanf("%f", &s[n].marks);
            n++;
            printf("Record Added!\n");
        }
        else if(ch==2){
            printf("\n--- Student List ---\n");
            for(i=0;i<n;i++){
                printf("ID: %d  Name: %s  Marks: %.2f\n",
                       s[i].id, s[i].name, s[i].marks);
            }
        }
        else if(ch==3){
            printf("Enter ID to search: ");
            scanf("%d", &id);
            f = 0;
            for(i=0;i<n;i++){
                if(s[i].id == id){
                    printf("Found -> ID: %d Name: %s Marks: %.2f\n",
                           s[i].id, s[i].name, s[i].marks);
                    f = 1;
                }
            }
            if(f==0)
                printf("Record not found in database\n");
        }
    } while(ch != 4);

    return 0;
}