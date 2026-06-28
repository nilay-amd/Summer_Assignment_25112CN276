#include<stdio.h>
int main(){
    int id;
    float basic, hra, da, tax, net;
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Allowances
    hra = basic * 0.20;         // house rent allowancdes
    da  = basic * 0.10;         //dearneness allowance

    // Tax
    tax = basic * 0.05;         // 5% tax


    net = basic + hra + da - tax;                //net salary

    printf("\n--- Salary Details ---\n");
    printf("Employee ID: %d\n", id);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}