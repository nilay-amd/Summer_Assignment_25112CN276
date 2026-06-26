#include<stdio.h>
int main(){
    char s[100];
    int i, j, k;
    printf("Enter string: ");
    scanf(" %[^\n]", s);
    for(i=0;s[i]!='\0';i++){
        if(s[i] == '\n'){
            s[i]='\0';
            break;
        }
        for(j=i+1;s[j]!='\0';j++){
            if(s[i] == s[j]){
                
                for(k=j;s[k]!='\0';k++){
                    s[k] = s[k+1];
                }
                j--; // rechecking
            }
        }
    }
    printf("After removing duplicates: %s", s);
    return 0;
}