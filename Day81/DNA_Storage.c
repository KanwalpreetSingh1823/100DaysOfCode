#include <stdio.h>
#include<string.h>
int main() {            // Codechef String Problem
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        for(int i=0; s[i]!='\0'; i+=2){
            if(s[i]=='0' && s[i+1]=='0') printf("A");
            else if(s[i]=='0' && s[i+1]=='1') printf("T");
            else if(s[i]=='1' && s[i+1]=='0') printf("C");
            else if(s[i]=='1' && s[i+1]=='1') printf("G");
        }
        printf("\n");
    }
    return 0;
}
