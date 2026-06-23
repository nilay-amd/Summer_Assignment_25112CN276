#include<stdio.h>
int main(){
    int n1,n2, max_size,duplicate=0,i,j;
    
    printf("enter the size of  first array ");
    scanf("%d",&n1);
    int a[n1];
    printf("enter the element of first array ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the size of second array ");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the element of second array ");
    for(j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    int m=0,k=0,s=0;
    if(n1>n2){
    max_size=n1;
    }
    else{
         max_size=n2;
    }
    int intersect[max_size];
    for( m=0;m<n1;m++){
    duplicate=0;
    for( k=0;k<m;k++){
        if(a[m]==a[k]){
            duplicate=1;
            break;
        }
    }
        if(duplicate==1){
            continue;
        }
       for( i=0;i<n2;i++){
        if(a[m]==b[i]){
           intersect[s]=a[m];
           s++;
           break;
      }
    }
}
      printf("Intersection elements are: ");
    for (i = 0; i < s; i++){
        printf("%d", intersect[i]);
    }
    return 0;
}