#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");     // 1
    scanf("%d",&n);                    // 1 3
    for(int i=1; i<=n; i++){           // 1 3 5
        int a=1;                       // 1 3 5 7
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}