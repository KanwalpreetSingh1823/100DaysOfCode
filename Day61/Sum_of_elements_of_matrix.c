#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements of array : ");
    int sum = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
            sum += a[i][j];
        }
    }
    printf("The sum is : %d",sum);
    return 0;
}