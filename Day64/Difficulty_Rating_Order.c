#include <stdio.h>
#include<stdbool.h>
int main() {
    int t;
    scanf("%d", &t);          // Codechef Problem
    while (t--) {
        int n;
        scanf("%d", &n);
        int d[n];
        bool flag = true;
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }
        int value = d[0];
        for(int i=1; i<n; i++){
            if(value>d[i]){
                flag = false;
                break;
            }
            value = d[i];
        }
        if(!flag) printf("No\n");
        else printf("Yes\n");
    }
}