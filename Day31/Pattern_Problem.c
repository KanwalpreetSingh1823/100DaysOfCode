#include<stdio.h>
int main(){
    int n,x,min=0;
    printf("Enter the number : ");        // HackerRank Problem
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int a = i;
            if(a>n) a = n*2-i;
            int b = j;
            if(b>n) b = n*2-j;
            if(a<=b) min = a;
            else min = b;
            printf("%d ",n+1-min);
        }
        printf("\n");
    }
    return 0;
}