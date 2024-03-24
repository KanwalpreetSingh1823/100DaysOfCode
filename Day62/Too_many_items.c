#include <stdio.h>
int main(){
    int t;              // Codechef Problem
    scanf("%d",&t);     // Taking Input
    while(t--){
        int n,c=0;    
        scanf("%d",&n);
        for(int i=1 ; i<=n; i=i+10){       // Increment i by 10 bec' one polybag can contain upto 10 items
            c++;
        }
        printf("%d\n",c); // Print number of polybags.
    }
    return 0;
}