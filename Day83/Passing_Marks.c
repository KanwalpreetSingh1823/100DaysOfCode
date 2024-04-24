#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);          // Codechef Problem
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for(int i=1; i<n; i++){
            int j=i;
            while(j>0 && arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
        printf("%d\n",arr[n-x] - 1);
    }
    return 0;
}
