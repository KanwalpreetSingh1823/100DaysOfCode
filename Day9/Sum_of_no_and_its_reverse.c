#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int p = n;
    int rev = 0;
    while(n>0){
        rev = rev*10;
        rev = rev + (n%10);
        n = n/10;
    }
    printf("%d\n",rev);
    int sum = p + rev;
    printf("%d",sum);
    return 0;
}