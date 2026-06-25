#include<stdio.h>
int main(){
    char s[100], c;
    int f[256] = {0};
    int i, m = 0;
    printf("Enter string: ");                     //by using frequency array
    fgets(s,sizeof(s),stdin);
    for(i=0;s[i]!='\0';i++){
        if(s[i] != '\n')
            f[s[i]]++;
    }    
    for(i=0;i<256;i++){
        if(f[i]>m){
            m = f[i];
            c = i;
        }
    }
    printf("Max occurring char: %c",c);
    return 0;
}