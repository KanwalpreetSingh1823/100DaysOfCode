#include<stdio.h>
int main(){          // CodeChef Problem
    int t;
    scanf("%d",&t);  // For test cases
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int count[11] = {0};
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            count[arr[i]] ++;
        }
        int max_count = 0;
        for(int i=0; i<=10; i++){
            if(count[i] > max_count) max_count = count[i];
        }
        int min_moves = n - max_count;
        printf("%d\n",min_moves);
    }
    return 0;
}