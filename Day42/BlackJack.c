#include <stdio.h>
int main(){
    int t;                     // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d",&a,&b);
        for(int i=1; i<=10; i++){
            c = 21 - a - b;
        }
        if(c<=10) printf("%d\n",c);
        else printf("%d\n",-1);
    }
    return 0;
}