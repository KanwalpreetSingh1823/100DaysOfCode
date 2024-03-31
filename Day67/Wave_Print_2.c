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
    for(int j=0; j<m; j++){      // Wave print column wise
        if(j%2==0){
            for(int i=m-1; i>=0; i--){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int i=0; i<n; i++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}