#include <stdio.h>
int sum(int n,int a,int b,int c){               // HackerRank Problem
    if(n==3) return c; 
    return sum(n-1,b,c,a+b+c);
}
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    int x = sum(n,a,b,c);
    printf("%d",x);
    return 0;
}