#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){                     // Codechef Problem
        int n;
        scanf("%d",&n);
        int a[n], b[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++){         
            scanf("%d",&b[i]);            // mx_like = max likes
        }                                 // mx_com = max comments
        int mx_like = 0, mx_com = 0, idx = 0;
        for(int i=0; i<n; i++){
            if(mx_like < a[i] || (mx_com < b[i] && mx_like == a[i])){
                mx_like = a[i];
                mx_com = b[i];
                idx = i;
            }
        }
        printf("%d\n",idx+1);
    }
    return 0;
}