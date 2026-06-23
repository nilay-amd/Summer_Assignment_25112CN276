#include<stdio.h>
int main(){
    int n1,n2,duplicate,i,j,k;

    printf("enter the size of first array ");
    scanf("%d",&n1);
    int a[n1];
    printf("enter the element of first array ");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the size of  second array ");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the element of second array ");
    for(j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }
    
   int m;
   printf("common elements are :\n");
   for( m=0;m<n1;m++){
    duplicate=0;
    for( k=0;k<m;k++){
        if(a[m]==a[k])
        {
            duplicate=1;
        }
    }
        if(duplicate==1){
            continue;
        }
       for( i=0;i<n2;i++){
          if(a[m]==b[i]){
           printf("%d ",a[m]);
           break;
      }
    }
}
      return 0;
    }