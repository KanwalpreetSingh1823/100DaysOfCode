#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}