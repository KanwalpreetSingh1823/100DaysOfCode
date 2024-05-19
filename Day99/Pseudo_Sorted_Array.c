#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);              // CodeChef Problem
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n-1; i++){   // Swap
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                break;
            }
        }
        int c = 0;
        for(int i=0; i<n-1; i++){   // Check
            if(arr[i]>arr[i+1]) c++;
        }
        if(c>0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}