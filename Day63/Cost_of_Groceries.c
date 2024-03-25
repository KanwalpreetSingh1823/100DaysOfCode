#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);          // Codechef Array Problem
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n], b[n], sum=0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[j]);
        }
        for(int i=0; i<n; i++){
            if(a[i]>=x) sum += b[i];
        }
        printf("%d\n",sum);
    }
}