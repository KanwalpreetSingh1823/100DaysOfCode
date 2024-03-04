#include<stdio.h>
int main(){
    int n,c=1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element number %d: ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}