#include <stdio.h>
int main(){
    int t;                       // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int rem = k;
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n; i++){
            if(rem >= arr[i]){
                printf("1");
                rem = rem - arr[i];
            }
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}