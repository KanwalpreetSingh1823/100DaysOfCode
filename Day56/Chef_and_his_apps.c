#include <stdio.h>
int main(){
    int t;                      // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int s,x,y,z;
        scanf("%d %d %d %d",&s,&x,&y,&z);
        int p = s - (x+y);
        if(p>=z) printf("%d",0);
        if(p<z){
            if(p+x>=z || p+y>=z) printf("%d",1);
            else printf("%d",2);
        }
        printf("\n");
    }
    return 0;
}