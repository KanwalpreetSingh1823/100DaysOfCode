#include <stdio.h>
int main(){
    int t;                         // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n,a,b;
        int c1=0,c2=0;
        int total = 0;
        scanf("%d %d %d",&n,&a,&b);
        for(int i=1; i<=n; i++){
            if(i%2==0) c1 += a;
            else if(i%2!=0) c2 += b;
        }
        total = c1 + c2;
        printf("%d\n",total);
    }
    return 0;
}