#include<stdio.h>
int main(){
    int n; // Positive A.P
    printf("How many times do you want to print numbers : ");
    scanf("%d",&n);
    int a;
    printf("Enter the number from where you want to start : ");
    scanf("%d",&a);
    int b;
    printf("Enter the decreasing difference : ");
    scanf("%d",&b);
    for(int i = 100; a>0 ; i++){
        printf("%d ",a);
        a = a - b;
    }
    printf("...");
    return 0;
}  