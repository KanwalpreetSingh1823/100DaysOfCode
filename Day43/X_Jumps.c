#include <stdio.h>
int main(){                    // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,p=0,c=0;
        scanf("%d %d",&x,&y);
        c = x/y;
        p = x%y;
        printf("%d\n",p+c);
    }
    return 0;
}