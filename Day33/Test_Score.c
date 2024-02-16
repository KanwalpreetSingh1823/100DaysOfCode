#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        int p = y % x;
        if(p==0) printf("YES");
        else printf("NO");
        printf("\n");
    }
    return 0;
}