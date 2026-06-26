#include <stdio.h>
int main(){
    char a[100], b[100];
    int i = 0, m = 0, l = 0, k;
    printf("Enter sentence: ");
    scanf(" %[^\n]", a);   // for taking full line input
     while(a[i] != '\0'){
        if(a[i] != ' '){
            l++;
        } else{
            if(l>m){
                m=l;
                for(k=0;k<l;k++){
                    b[k]=a[i-l+k];
                }
                b[k]='\0';
            }
            l=0;
        }
        i++;
    }
    if(l>m){
        m=l;
        for(k=0;k<l;k++){
            b[k]=a[i-l+k];
        }
        b[k]='\0';
    }
    printf("Longest word: %s", b);
    return 0;
}