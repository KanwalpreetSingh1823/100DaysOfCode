#include <stdio.h>
int main(){
    int t;                // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x,y,c;
        scanf("%d %d",&x,&y);
        c=(y*100)/x;
        if(c>=50){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}