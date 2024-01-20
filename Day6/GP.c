#include<stdio.h>
int main(){
    int n;
    printf("How many times do you want to print numbers : ");
    scanf("%d",&n);
    int a;
    printf("Enter the number from where you want to start : ");
    scanf("%d",&a);
    int b;
    printf("What is the multiple you want : ");
    scanf("%d",&b);
    for(int i=4; i<=(3*n+1); i=i+3){
        printf("%d ",a);
        a = a * b;
    }
    printf("...");
    return 0;
}