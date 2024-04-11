#include <stdio.h>
#include<string.h>
int main(){              // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        char S[6], T[6];
        scanf("%s",S);
        scanf("%s",T);
        for(int i=0; i<5; i++){
            if(S[i]==T[i]) printf("G");
            else printf("B");
        }
        printf("\n");
    }
}