#include <stdio.h>
int main(){              // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        float a,x,b,y;
        float s1=0,s2=0;    // Initialising speeds to be zero and they can be float also.
        scanf("%d %d %d %d",&a,&x,&b,&y);
        s1 = a/x;    // Use general formula of speed
        s2 = b/y;
        if(s1>s2) printf("Alice\n");
        else if(s2>s1) printf("Bob\n");
        else printf("equal\n");
    }
    return 0;
}