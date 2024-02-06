#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d\n",b);
    return 0;
}