#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    int rec = n * factorial(n-1);
    return rec;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = factorial(n);
    printf("The factorial of %d is %d",n,a);
    return 0;
}