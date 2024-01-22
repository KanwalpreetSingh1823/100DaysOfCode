#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n>0){
        int r = n%10;
        n = n / 10;
        if(r%2==0){
            sum = sum + r;
        }
    }
    printf("The sum of even digits of a given number is : %d",sum);
    return 0;
}