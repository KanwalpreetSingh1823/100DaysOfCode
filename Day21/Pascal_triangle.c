#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int k=0; k<=n-i-1; k++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            int ncr = factorial(i)/(factorial(i-j)*factorial(j));
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}