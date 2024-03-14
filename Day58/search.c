#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,x;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int arr[n];
    int index=0;
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    bool flag = false;
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x){
            flag = true;
            index = i;
            break;
        }
    }
    if(!flag){
        printf("%d is not present in the array",x);
    }
    else printf("%d is present in the array at index %d",x,index);
    return 0;
}