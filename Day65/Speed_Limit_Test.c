#include <stdio.h>
int main(){              // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        float a,x,b,y;
        float s1=0,s2=0;
        scanf("%d %d %d %d",&a,&x,&b,&y);
        s1 = a/x;
        s2 = b/y;
        if(s1>s2) printf("Alice\n");
        else if(s2>s1) printf("Bob\n");
        else printf("equal\n");
    }
    return 0;
}