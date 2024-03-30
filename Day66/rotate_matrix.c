#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows and columns : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++){     // Taking Input
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){    // Taking Transpose
        for(int j=0; j<=i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0; i<n; i++){     // Rotation
        for(int j=0,k=n-1; j<k ;j++,k--){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
    for(int i=0; i<n; i++){    // Print the rotated array.
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}