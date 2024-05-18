#include<stdio.h>
int main(){
    int t;                        // CodeChef Problem
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int freq[10001] = {0};
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            freq[arr[i]]++;
        }
        int v = 0;
        int c=0;
        for(int i=0; i<=10000; i++){
            if(c<freq[i] || (freq[i]==c && i<v)){
                c = freq[i];
                v = i;
            }
        }
        printf("%d %d\n",v,c);
    }
    return 0;
}