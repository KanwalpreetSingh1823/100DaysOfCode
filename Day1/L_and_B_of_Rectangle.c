#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);
    float area = x*y;
    float per = 2*(x+y);
    if(area>per){
        printf("\nThe Area is greater than the perimeter.\n");
    }
    if(area == per){
        printf("\nThe Area and Perimeter are equal.\n");
    }
    if(area<per){
        printf("\nThe perimeter is greater than the area.\n");
    }
    return 0; 
}