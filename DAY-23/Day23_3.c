#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int freq[26] = {0};
    int i=0;
    printf("Enter 1st string: ");
    scanf("%s",str1);
    printf("Enter 2nd string: ");
    scanf("%s",str2);

    // for str1
    for(i=0;str1[i]!='\0';i++){
        freq[str1[i] - 'a']++;
    }
    //for str2
    for(i=0;str2[i]!='\0';i++){
        freq[str2[i] - 'a']--;
    }
    // Check all 
    for(i=0;i<26;i++){
        if(freq[i] != 0) {
            printf("Not Angram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}