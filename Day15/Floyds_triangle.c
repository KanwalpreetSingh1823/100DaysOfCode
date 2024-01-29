#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");          //  1
    scanf("%d",&n);                         //  2 3
    int a=1;                                //  4 5 6
    for(int i=1; i<=n; i++){                //  7 8 9 10
        for(int j=1; j<=i; j++){           
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}