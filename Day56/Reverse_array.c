#include<stdio.h>
int main(){
    int n,c=1;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    for (int i=0; i<=n-1; i++){
        brr[i] = arr[n-1-i];
        printf("%d ",brr[i]);
    }
    return 0;
}