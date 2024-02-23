#include <stdio.h>
int main(){                            // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,a;
        scanf("%d %d",&n,&x);
        a = n-x;
        if(x>a) printf("%d",a);
        else printf("%d",x);
        printf("\n");
    }
    return 0;
}