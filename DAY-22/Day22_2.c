#include<stdio.h>
int main(){
    char str[100];
    int i=0, words=0;
    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    // Count words
    while(str[i] != '\0'){
        if((i == 0 && str[i] != ' ') || 
           (str[i] != ' ' && str[i-1] == ' ')){
            words++;
        }
        i++;
    }
    printf("Number of words = %d\n", words);
    return 0;
}