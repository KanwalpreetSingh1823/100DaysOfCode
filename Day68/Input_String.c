#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    printf("Enter string : ");
    // scanf("%[^\n]s",str);  --> Another method for taking the input of a string.
    gets(str);    // Use of a get function for input a string.
    printf("\n");
    printf("%s",str);
    return 0;
}