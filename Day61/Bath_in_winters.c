#include <stdio.h>
int main(){                  // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        int p = 1;
        p = y*2;
        int c = 0;
        for(int i=0; i<=x; i++){
            if(p<=x){
                p = p+y*2;
                c++;
            }
        }
        printf("\n%d",c);
    }
    return 0;
}