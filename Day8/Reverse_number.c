#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int rev = 0;
    while(n>0){
        rev = rev * 10;
        rev = rev + (n%10);
        n = n/10;
    }
    printf("%d",rev);
    return 0;
}