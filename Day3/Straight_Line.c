#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the Coordinates of A : ");
    scanf("%d %d",&x1 ,&y1);
    printf("Enter the Coordinates of B : ");
    scanf("%d %d",&x2 ,&y2);
    printf("Enter the Coordinates of C : ");
    scanf("%d %d",&x3 ,&y3);
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);
    if(m1 == m2){
        printf("It is a Straight Line");
    }
    else{
        printf("It is not a Straight Line");

    }
    return 0;
}