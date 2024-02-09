#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = 1;
    int b = n-1;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=b; k++){
            printf(" ");
        }
        b = b - 1;
        int x = 65;
        for(int j=1; j<=a; j++){
            char ch = (char)x;
            printf("%c",ch);
            x++;
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}