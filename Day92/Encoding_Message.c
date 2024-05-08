#include<stdio.h>
#include<string.h>
int main(){             // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for(int i=0; i<n-1; i+=2){
            char temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
        for(int i=0; i<n; i++){
            printf("%c",122-(str[i]-97));
        }
        printf("\n");
    }
    return 0;
}