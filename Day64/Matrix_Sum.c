#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l1,l2,r1,r2;
    printf("Enter the values of l1,l2,r1,r2 : ");
    scanf("%d %d %d %d",&l1,&l2,&r1,&r2);
    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += arr[i][j];
        }
    }
    printf("Sum = %d",sum);
    return 0;
}