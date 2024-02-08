#include<stdio.h>
void update(int* x,int* y){ // HackerRank Problem..
    int temp = *x;
    *x = *x + *y;
    *y = *y - temp;
    if(*y<0){
        *y = *y * (-1);
    }
}
int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    update(&a,&b);
    printf("%d\n%d",a,b);
    return 0;
}
