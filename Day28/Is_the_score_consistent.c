#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);      // Codechef Problem
    while(t--){
        int a,b,c,d;
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        if(a<c && b==d) printf("POSSIBLE\n");
        else if(a>c || b>d) printf("IMPOSSIBLE\n");
        else printf("POSSIBLE\n");
    }
    return 0;
}