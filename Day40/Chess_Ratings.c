#include <stdio.h>
int main(){                             // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        int s = y-x;
        int count = 0;
        for(int i=1;i<=s;i=i+8){
            count += 1;
        }
        printf("%d\n",count);
    }
    return 0;
}