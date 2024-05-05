#include <stdio.h>
int main(){                    // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int max = 0;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(max < arr[i]) max = arr[i];
        }
        printf("%d\n",max);
    }
    return 0;
}