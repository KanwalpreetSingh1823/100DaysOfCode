#include <stdio.h>
int main(){
    int t;                       // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);  // Taking input
        int rem = k;
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n; i++){   // Check condition that the rem. money is greater than the money req. by the particular person.
            if(rem >= arr[i]){
                printf("1");
                rem = rem - arr[i];          // Reducing money
            }
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}