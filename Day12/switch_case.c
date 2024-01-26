#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    switch(age){
        case 5:
        printf("You are not eligible.");
        break;
        case 10:
        printf("You are not eligible."); 
        break;
        default:
        printf("You are eligible.");
    }
    return 0;
}