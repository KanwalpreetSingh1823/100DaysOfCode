#include <stdio.h>
#define MAX_SIZE 1001                 // Codechef Problem
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int freq[MAX_SIZE] = {0};
        int MaxFreq = 0;
        int MaxCount = 0;
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            freq[arr[i]] ++;
            if(MaxFreq < freq[arr[i]]) MaxFreq = freq[arr[i]];
        }
        for(int i=1; i<MAX_SIZE; i++){
            if(freq[i] == MaxFreq) MaxCount++;
        }
        if(MaxCount==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}