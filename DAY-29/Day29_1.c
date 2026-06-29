#include<stdio.h>
int main(){
    int ch;
    float a,b;
    while(1){
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a + b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a - b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a * b);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Cannot divide by zero\n");
                break;
            case 5:
                printf("Exiting...\n");
                return 0;   // Proper exit
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;   
}