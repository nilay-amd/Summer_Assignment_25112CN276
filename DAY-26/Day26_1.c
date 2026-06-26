#include <stdio.h>
#include <stdlib.h>                     //for using rand()
int main(){
    int num, g, i;
    num = rand() % 10 + 1;   // random number (1–10) by computer
    printf("Guess the number (1 to 10)\n");

    for(i=1;i<=5;i++){
        printf("Attempt %d: ", i);
        scanf("%d",&g);

        if(g==num){
            printf("Correct!\n");
            break;
        } else if(g>num){
            printf("Too high!\n");
        } else{
            printf("Too low!\n");
        }
    }
    if(g!=num){
        printf("Game Over! Number was %d\n", num);
    }
    return 0;
}