#include <stdio.h>
int max(int a,int b){              // Codechef Problem
    if(a>b) return a;
    else return b;
}
int main(){
    int t,ans;
    scanf("%d",&t);
    while(t--){
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int s1 = x1 - x2;
        int s2 = y1 - y2;
        if(s1<0) s1 = s1*(-1);
        if(s2<0) s2 = s2*(-1);
        ans = max(s1,s2);
        printf("%d\n",ans);
    }
    return 0;
}