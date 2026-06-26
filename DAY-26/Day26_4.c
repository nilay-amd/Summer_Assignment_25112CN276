#include<stdio.h>
int main(){
    int ans, score = 0;
    printf("=== Simple Quiz ===\n");
    printf("\nQ1. Capital of India?\n");                                //Q1
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans==2){
        printf("Correct!\n");
        score++;
    } else{
        printf("Wrong!\n");
    }
    printf("\nQ2. 2 + 2 = ?\n");                         //Q2
    printf("1. 3\n2. 4\n3. 5\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans==2){
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nQ3. C language was developed by?\n");                           //Q3
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    printf("Enter answer: ");
    scanf("%d", &ans);

    if(ans==1){
        printf("Correct!\n");
        score++;
    } else{
        printf("Wrong!\n");
    }
    printf("\nYour Score = %d/3\n", score);
    return 0;
}