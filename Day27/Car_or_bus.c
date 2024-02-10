#include <stdio.h>
int main(){
    int t;                    // Car or Bus
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y) printf("CAR\n");
        else if(x<y) printf("BIKE\n");
        else printf("SAME\n");
    }
    return 0;
}