#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);     // Codechef Problem
    while(t--){
        int x;
        scanf("%d",&x);
        if(x<=10) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}