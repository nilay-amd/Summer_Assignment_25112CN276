#include <stdio.h>
int main(){
    char a[100], b[100], t[200];
    int i, j, k = 0;
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
        for(i=0;a[i]!='\0';i++){
        t[k++] = a[i];
    }
    for(j=0;a[j]!='\0';j++){
        t[k++] = a[j];
    }
    t[k]='\0';
    for(i = 0;t[i]!='\0';i++){
        for(j = 0;b[j] != '\0';j++){
            if(t[i + j] != b[j])
                break;
        }
        if(b[j] == '\0'){
            printf("Rotation");
            return 0;
        }
    }
    printf("Not Rotation");
    return 0;
}