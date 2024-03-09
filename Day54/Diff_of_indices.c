#include<stdio.h>
int main(){
    int n,c=1,c1=0,c2=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        printf("Enter element %d : ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    for(int i=0;i<=n-1;i++){
        if(i%2!=0) c1 += arr[i];
        else c2 += arr[i];
    }
    int d = c1-c2;
    if(d<0) d=d*(-1);
    printf("Difference = %d ",d);
    return 0;
}