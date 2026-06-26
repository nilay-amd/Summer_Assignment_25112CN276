#include <stdio.h>
int main(){
    char a[100];
    int i, j, c;
    printf("Enter string: ");
    scanf("%s", a);
    for(i=0;a[i]!='\0';){
        c = 1;
        j = i + 1;
        while(a[j] == a[i]){
            c++;
            j++;
        }
        if(c>1)
            printf("%c%d", a[i], c);
        else
            printf("%c", a[i]);
        i = j;
    }
    return 0;
}