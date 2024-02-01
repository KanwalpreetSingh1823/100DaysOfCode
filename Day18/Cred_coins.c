#include <stdio.h>
int main(){
    int t,count;   // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        count = (x*y)/100;
        printf("%d\n",count);
    }
    return 0;
}