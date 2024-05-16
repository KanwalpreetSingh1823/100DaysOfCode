#include<stdio.h>
int main(){
    int t;                     // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int pos1 = -1, posN = -1;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]==1) pos1 = i;
            if(arr[i]==n) posN = i;
        }
        int result = pos1 + (n - 1 - posN);
        if (pos1 > posN) {
            result -= 1;
        }
        printf("%d\n", result);
    }
    return 0;
}