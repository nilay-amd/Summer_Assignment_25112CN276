#include<stdio.h>
int main(){
    int ch,i,n=0,f;
    char nm[50][20], s[20];
    long long ph[50];
    while(1){
        printf("\n--- Contact Menu ---\n");
        printf("\n1.Add\n2.Show\n3.Search\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        if(ch==1){
            printf("Name: ");
            scanf("%s", nm[n]);
            printf("Phone: ");
            scanf("%lld", &ph[n]);
            n++;
        }
        else if(ch==2){
            for(i=0;i<n;i++){
                printf("%s - %lld\n", nm[i], ph[i]);
            }
        }
        else if(ch==3){
            printf("Enter name: ");
            scanf("%s", s);
            f = 0;
            for(i=0;i<n;i++){
                int j=0;
                while(nm[i][j] == s[j] && nm[i][j] != '\0'){
                    j++;
                }
                if(nm[i][j] == '\0' && s[j] == '\0'){
                    printf("Found: %s - %lld\n",nm[i],ph[i]);
                    f = 1;
                    break;
                }
            }
            if(f==0)
                printf("Not fond\n");
        }
        else if(ch==4){
            break;
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}