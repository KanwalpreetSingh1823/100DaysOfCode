#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[c][r];
    for(int i=0; i<c; i++){   // Storing into another matrix
        for(int j=0; j<r; j++){
            brr[i][j] = arr[j][i];
        }
    }
    printf("\n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}