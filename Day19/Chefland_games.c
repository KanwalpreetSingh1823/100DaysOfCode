#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int R1,R2,R3,R4;
        scanf("%d %d %d %d",&R1,&R2,&R3,&R4);
        if(R1==R2 && R2==R3 && R3==R4 && R1==0) printf("IN\n");
        else printf("OUT\n");
    }
    return 0;
}