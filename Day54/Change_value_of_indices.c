#include<stdio.h>
int main(){
    int n,c=1;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    for(int i=0;i<=n-1;i++){
        if(i%2!=0) arr[i] = arr[i] * 2;
        else arr[i] = arr[i] + 10;
        printf("%d ",arr[i]);
    }
    return 0;
}