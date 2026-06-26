#include<stdio.h>
int main(){
    char a[100],b[100];
    int i, j;
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    printf("Common characters: ");
    for(i=0;a[i]!='\0';i++){
        for(j=0;b[j]!='\0';j++){
            if(a[i] == b[j]){
                printf("%c ", a[i]);
                break;   // avoid repeating for same char
            }
        }
    }
        return 0;
}