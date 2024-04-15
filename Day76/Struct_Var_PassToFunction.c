#include<stdio.h>
#include<string.h>
typedef struct Box{    // Box should be globally defined
        int l;
        int b;
        int h;
} dimension;

void fun(dimension x){
    printf("%d",x.b);
    return;
}

int main(){
    dimension B1;
    B1.l = 45;
    B1.b = 60;
    B1.h = 90;
    fun(B1);   // Passing complete structure
    return 0;
}