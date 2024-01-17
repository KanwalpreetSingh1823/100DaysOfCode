#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    if((x>0 || x<0) && y==0){
        printf("The point lies on x-axis");
    }
    else if((y>0 || y<0) && x==0){
        printf("The point lies on y-axis");
    }
    else if(x!=0 && y!=0){
        printf("The point lies in plane");
    }
    else{
        printf("The point is origin");
    }
    return 0;
}