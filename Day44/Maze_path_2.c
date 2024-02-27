#include<stdio.h>
int maze(int n,int m){
    int rightways = 0;         // Conditions :- 1. Move down and right
    int downways = 0;          //            :- 2. Move 1 step at a time.
    if(n==1 && m==1) return 1;
    if(m==1) downways += maze(n-1,m);
    if(n==1) rightways += maze(n,m-1);
    if(n>1 && m>1){
        rightways += maze(n,m-1);
        downways += maze(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n,m;
    printf("Enter no. of rows of maze : ");
    scanf("%d",&n);
    printf("Enter no. of columns of maze : ");
    scanf("%d",&m);
    int noOfWays = maze(n,m);
    printf("Number of Ways = %d",noOfWays);
    return 0;
}