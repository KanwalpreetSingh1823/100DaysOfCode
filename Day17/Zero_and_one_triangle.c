#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");            // 1
    scanf("%d",&n);                           // 0 1
    for(int i=1; i<=n; i++){                  // 1 0 1
        for(int j=1; j<=i; j++){              // 0 1 0 1
            if((i+j)%2==0) printf("1 ");     
            else  printf("0 ");
        }
        printf("\n");
    }
    return 0;
}