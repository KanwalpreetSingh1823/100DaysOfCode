#include<stdio.h>
#include<string.h>
int main(){
    char *ptr = "Hello World";  // ptr poimts to the first letter of string
    ptr = "Great";    // Now it points to the first letter of other string
    printf("%s\n",ptr);
    // char str[] = "Check";
    // *ptr = str;
    // *ptr = 'H';
    printf("%s",ptr);
    return 0;
}