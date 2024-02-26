#include<stdio.h>
int main(){
    int t;                        // Codechef Problem
    scanf("%d",&t);
    while(t--){
        int x,y,z,p1=0,p2=0,p3=0;
        scanf("%d %d %d",&x,&y,&z);
        int c1 = 0;
        if(x>3 && x%3!=0){
            p1 = (x/3)*z;
        }
        if(x>3 && x%3==0){
            p2 = ((x-1)/3)*z;
        }
        p3 = x * y;
        printf("%d\n",p1+p2+p3);
    }
    return 0;
}