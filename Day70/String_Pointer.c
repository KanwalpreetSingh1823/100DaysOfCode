#include<stdio.h>
#include<string.h>
int main(){
    char *ptr = "Hello World";
    ptr = "Great";
    printf("%s\n",ptr);
    // char str[] = "Check";
    // *ptr = str;
    // *ptr = 'H';
    printf("%s",ptr);
    return 0;
}