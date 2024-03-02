#include <stdio.h>
int main(){
    int t;                        // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x,n,c=0;
        scanf("%d %d",&x,&n);
        if(n%100==0){
            c = n/100;
        }
        else c = n/100 + 1;
        if(c>x) printf("%d",c-x);
        else printf("%d",0);
        printf("\n");
    }
    return 0;
}