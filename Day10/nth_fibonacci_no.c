#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int c = 1;
    for(int i=1; i<=n-2; i++){
        c = a + b;
        a = b;
        b = c;
    }
    printf("The %d fibonacci number is %d ",n,c);
    return 0;
}