#include<stdio.h>
int main(){
    int n,c=1,max;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d : ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    max = arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("Maximum value = %d",max);
    return 0;
}