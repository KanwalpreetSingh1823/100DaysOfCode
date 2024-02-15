#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);         // Codechef Problem
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%4==0){
            int a = n/4;
            printf("%d",a);
        }
        else if(n%4!=0){
            int b = n/4+1;
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}