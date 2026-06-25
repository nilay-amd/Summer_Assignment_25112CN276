#include<stdio.h>

int main(){
    char str[100], rev[100];
    int i = 0, j, length = 0;

    printf("Enter a string: ");
    gets(str);  
    while(str[i]!='\0') {
        length++;
        i++;
    }
    for(i = 0, j = length - 1; j >= 0; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';
    printf("Reversed string = %s\n", rev);
    return 0;
}