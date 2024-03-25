#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {               // Codechef Array Problem
        int n;
        scanf("%d", &n);
        int a[n],c=0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int M = a[0];
        for (int i = 0; i < n; i++) {
            if(a[i]<M) M = a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]!=M){
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
