#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t); // Codechef Problem
    while(t--){
        int x;
        scanf("%d",&x);
        if(x<=100) printf("%d\n",x);
        else if(x>100 && x<=1000) printf("%d\n",x-25);
        else if(x>1000 && x<=5000) printf("%d\n",x-100);
        else if(x>5000) printf("%d\n",x-500);
    }
    return 0;
}