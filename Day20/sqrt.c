#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int root = sqrt(n);
    printf("The square root of %d is : %d",n,root);
    return 0;
}