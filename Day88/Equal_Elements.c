#include<stdio.h>
#define MAX_SIZE 200000
int main(){                // Codechef Problem
    int t;
    scanf("%d",&t);
    while(t--){            // Check for most occuring element
        int n;
        scanf("%d",&n);
        int arr[n];
        int freq[MAX_SIZE] = {0};
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            freq[arr[i]] ++;
        }
        int maxfreq = 0;
        for(int i=1; i<MAX_SIZE; i++){
            if(freq[i]>maxfreq) maxfreq = freq[i];
        }
        printf("%d\n",n-maxfreq);
    }
    return 0;
}