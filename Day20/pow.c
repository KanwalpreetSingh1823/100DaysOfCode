#include<stdio.h>
#include<math.h>
int main(){
    int b,p;
    printf("Enter the base : ");
    scanf("%d",&b);
    printf("Enter the power : ");
    scanf("%d",&p);
    int power = pow(b,p);
    printf("The %d raise to power %d is : %d",b,p,power);
    return 0;
}