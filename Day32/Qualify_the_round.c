#include <stdio.h>
int main(){
    int t;                // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x,a,b,p;
        scanf("%d %d %d",&x,&a,&b);
        p = 2*b;
        if(a+p>=x) printf("Qualify");
        else printf("NotQualify");
        printf("\n");
    }    
    return 0;
}