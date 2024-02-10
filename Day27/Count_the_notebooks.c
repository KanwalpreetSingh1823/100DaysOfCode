#include<stdio.h>
int main(){
    int t;                   // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n,a;
        scanf("%d",&n);
        int p = n*1000;
        a = p/100;
        printf("%d\n",a);
    }
    return 0;
}