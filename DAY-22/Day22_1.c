#include<stdio.h>
int main(){
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while(str[length] != '\0'){
        length++;
    }
    for(i=0;i<length/2;i++){
        if(str[i] != str[length - i - 1]){
            printf("String is NOT a Palindrome\n");
            return 0;                    //for exiting the loop
        }
    }
    printf("String is a Palindrome\n");
    return 0;
}