#include<stdio.h>
int main(){
    int n,c=1,s=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d : ",c);
        scanf("%d",&arr[i]);
        s = s + arr[i];
        c++;
    }
    printf("Sum = %d",s);
    return 0;
}