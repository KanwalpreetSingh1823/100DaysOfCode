#include <stdio.h>
int main(){
    int t;                           // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count = 0;
        for(int i=1; i<=n; i++){
            int a;
            scanf("%d",&a);
            if(a>=1000){
                count += 1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}