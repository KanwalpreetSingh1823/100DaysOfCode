#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        bool flag = false;
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(!flag){
            printf("Unique element is : %d",arr[i]);
            break;
        }
    }
    return 0;
}