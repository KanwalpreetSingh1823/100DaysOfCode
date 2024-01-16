#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st no. : ");
    scanf("%d",&a);
    printf("Enter the 2nd no. : ");
    scanf("%d",&b);
    printf("Enter the 3rd no. : ");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("%d is greatest",a);
    }
    else if(b>=a && b>=c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
    return 0;
}