#include <stdio.h>
int main(){
    int t;              // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        for(int i=1 ; i<=n; i=i+10){
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}