#include <stdio.h>
int main(){
    int t;                     // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        int p1 = x/5;
        int p2 = x/10;
        if(x%10==0) printf("%d",p2);
        else if(x%10!=0){
            if(x%5==0) printf("%d",x/10 + (x%10)/5);
            else printf("%d",-1);
        }
        printf("\n");
    }
    return 0;
}