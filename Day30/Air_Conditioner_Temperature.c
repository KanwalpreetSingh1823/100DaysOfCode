#include <stdio.h>
int main(){                           // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,x;
        scanf("%d %d %d",&a,&b,&c);
        x = a;
        if(x<b) x=b;
        if(x<c) x=c;
        if(x==c && x>b && x>a) printf("No\n");
        else if(x==b) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}