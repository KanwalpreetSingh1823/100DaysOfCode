#include<stdio.h>
void dec(int n){
    if(n==0) return;
    printf("%d\n",n);  
    return dec(n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    dec(n);
    return 0;
}