#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        char v[n+1];
        scanf("%s", v);
        int min_size = 101;   // Acc. to Size Constraint
        for(int i=0; i<n; i++){
            if(v[i]== '0' && min_size>a[i]){
                min_size = a[i];
            }
        }
        printf("%d\n",min_size);
    }
    return 0;
}
