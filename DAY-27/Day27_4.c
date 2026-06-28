#include<stdio.h>
int main(){
    char name[50];
    int m1,m2, m3, m4, m5;
    int total;
    float per;

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    per = total/5.0;

    printf("\n----- Marksheet -----\n");
    printf("Name: %s\n", name);
    printf("Marks: %d %d %d %d %d\n", m1, m2, m3, m4, m5);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", per);

    if(per >= 90)
        printf("Grade: A\n");
    else if(per >= 75)
        printf("Grade: B\n");
    else if(per >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}