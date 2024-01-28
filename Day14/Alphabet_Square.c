#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");    // A B C D
    scanf("%d",&n);                   // A B C D
    for(int i=1; i<=n; i++){          // A B C D
        int x=65;                     // A B C D
        for(int j=1; j<=n; j++){
            char ch = (char)x;
            printf("%c ",ch);
            x+=1;
        }
        printf("\n");
    }
    return 0;
}