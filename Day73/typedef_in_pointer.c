#include<stdio.h>
#include<string.h>

typedef int* Pointer;
int main(){
    int x = 4, y=3;
    Pointer a=&x, b=&y;
    printf("%p\n",&a);
    printf("%p\n",&b);
    return 0;
}