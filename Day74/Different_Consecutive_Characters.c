#include <stdio.h>
#include<string.h>
int main(){
    int t;             // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n, c=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(int i=1; i<n; i++){
            if(s[i-1]==s[i]) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}