#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);                // Codechef Array Problem
    while (t--) {
        int n,m1=0,m2=0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if(a[i]>m1) m1 = a[i];
        }
        for (int i = 0; i < n; i++) {
            if(a[i]>m2 && a[i]<m1) m2 = a[i];
        }
        printf("%d\n",m1+m2);
    }
    return 0;
}
