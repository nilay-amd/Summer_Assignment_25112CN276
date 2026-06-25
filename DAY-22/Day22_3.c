#include<stdio.h>
int main(){
    char str[100];
    int freq[256] = {0};
    int i=0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0'){
        freq[str[i]]++;
        i++;
    }
    printf("\nCharacter Frequency:\n");
    for (i=0;i<256;i++){
        if (freq[i]!=0){
            printf("%c = %d\n", i, freq[i]);
        }
    }
    return 0;
}