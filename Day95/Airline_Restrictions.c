#include <stdio.h>
int main(){
    int t;                // CodeChef Problem
    scanf("%d",&t);
    while(t--){       
        int a,b,c,d,e;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        if((a+b)<=d && c<=e){
            printf("YES\n");
        }
        else if((a+c)<=d && b<=e) {
            printf("YES\n");
        }
        else if((b+c)<=d && a<=e){
            printf("YES\n");
        }
        else printf("No\n");
    }
    return 0;
}