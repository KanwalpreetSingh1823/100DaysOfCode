#include <stdio.h>
int main(){               // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,c,x,d;
        scanf("%d %d",&n,&m);
        int p = n*2;
        if(m>=n){
            printf("%d",n);
        }
        else {
            printf("%d",p-m);
        }
        printf("\n");
    }
    return 0;
}