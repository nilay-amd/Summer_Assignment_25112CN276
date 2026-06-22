int main(){
    int size,i=0,max_frequency =0,j,element=0;
    
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
  
    printf("enter the elements of array");
    for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size;i++){
        int c=0;
        for(j=0;j<size;j++){
            if(arr[j]==arr[i]){
            c++;
            }}
            if(c > max_frequency){
            max_frequency = c;
            element = arr[i];
            }
        }

    printf("Max frequency element is %d",element);        
    return 0;
}