#include<stdio.h>
int main(){
    int t;                  // HackerEarth Problem
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n], brr[n];
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n; i++){
            scanf("%d",&brr[i]);
        }
        int l=0, r = n-1;
        while(l<n && arr[l]==brr[l]) l++;
        while(r>=0 && arr[r]==brr[r]) r--;
        int result;
        if(l>=r) result = 0;
        else result = r - l + 1;
        printf("%d\n",result);
    }
    return 0;
}