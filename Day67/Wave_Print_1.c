#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns of matrix : ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0; i<m; i++){       // Taking input of matrix
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<m; i++){    // Wave print row wise
        if(i%2==0){
            for(int j=0; j<n; j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}