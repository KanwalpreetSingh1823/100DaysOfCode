#include<stdio.h>
int power(int a,int b){
    if(a==0 && b==0) return 0;
    if(b==0) return 1;
    int x = power(a,b/2);
    if(b%2==0) return x * x;
    else return x * x * a;
}
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    int ans = power(a,b);
    printf("The %d raised to power %d is %d",a,b,ans);
    return 0;
}