#include<stdio.h>
#include <stdbool.h>
bool palindrom(int arr[],int n){
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j]) return false;
    }
    return true;
}
int main(){
    int n,c=1;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    if(palindrom(arr,n)) printf("The array is a palindrom");
    else printf("The array is not a Palindrom");
    return 0;
}