#include<stdio.h>
#include<limits.h>
int main(){
    int n,c=1;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d : ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    int max = INT_MIN,smax = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) {
            smax = max;
            max = arr[i];
        }
        else if(arr[i]!=max && smax<arr[i]) smax = arr[i];
    }
    printf("The second max value is : %d",smax);
    return 0;
}