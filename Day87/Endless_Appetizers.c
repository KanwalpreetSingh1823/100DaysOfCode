#include <stdio.h>

int main(void) {         // CodeChef Problem
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,r;
        scanf("%d %d %d",&x,&y,&r);
        int c = 0;
        int d = r/30;
        x += d;
        for(int i=0; i<x; i+=y){
            if(i%y==0) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}