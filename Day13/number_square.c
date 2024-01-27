#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}