#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);     // Codechef Problem
    while(t--){
        int x;
        scanf("%d",&x);   // Taking Input 
        if(x<=10) printf("YES\n");   // Check if the Rank is less than or equal to 10.
        else printf("NO\n");
    }
    return 0;
}