#include<stdio.h>
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d/n",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    int p = 1;
    for(int i=1; i<=b; i++){
        p *= a;
    }
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}