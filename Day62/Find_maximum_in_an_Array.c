#include <stdio.h>
int main(){
    int t,n;                        // Codechef Array Problem
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        int max = arr[0];
        for(int i=0; i<n; i++){
            if(max<arr[i]) max = arr[i];
        }
        printf("%d\n",max);
    }
    return 0;
}