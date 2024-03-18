#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int b[r][c];
    printf("Enter the elements of 1st array : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of 2nd array : ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe sum of two matrices is : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}