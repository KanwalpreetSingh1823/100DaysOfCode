#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){   // Taking input or arr[][] matrix.
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[c][r];
    for(int i=0; i<c; i++){   // Storing into another matrix
        for(int j=0; j<r; j++){    // and change the values.
            brr[i][j] = arr[j][i];
        }
    }
    printf("\n");   
    for(int i=0; i<c; i++){    // Print the values of brr[][] matrix.
        for(int j=0; j<r; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}