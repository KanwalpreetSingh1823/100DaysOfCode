#include <stdio.h>
int main(){                     // Codechef Array Problem
    int n,x,c=0;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            c++;
            break;
        }
    }
    if(c==1) printf("Yes\n");
    else printf("NO\n");
    return 0;
}