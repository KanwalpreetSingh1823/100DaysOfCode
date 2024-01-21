#include<stdio.h>
int main(){
    int x = 4,y=3,z;
    printf("%d\n",--x);
    printf("%d\n",x--);
    printf("%d\n",x);
    z = x---y;
    printf("%d\n",z);
    printf("%d",x);
    return 0;
}