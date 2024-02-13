#include <stdio.h>
int main(){
    int t;                        // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        if(x>=1 && x<=50){
            printf("LEFT\n");
        }
        else if(x>50 && x<=100){
            printf("RIGHT\n");
        }
    }
    return 0;
}